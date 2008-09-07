/* -*- mode: c -*- */
/* $Id$ */

/* Copyright (C) 2008 Alexander Chernov <cher@ejudge.ru> */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

static void
do_remove_login_from_pool(
        struct users_cache *uc,
        struct userlist_user *u)
{
  struct xml_tree *u_xml = (struct xml_tree*) u;

  if (!u) return;
  ASSERT(u->id > 0 && u->id < uc->size);

  uc->user_map[u->id] = 0;
  UNLINK_FROM_LIST(u_xml, uc->first, uc->last, left, right);
  userlist_free(u_xml);
  uc->count--;
}

static struct userlist_user *
allocate_login_on_pool(
        struct uldb_mysql_state *state,
        int user_id)
{
  struct users_cache *uc = &state->users;
  struct userlist_user *u;
  struct xml_tree *u_xml;

  if (user_id <= 0) return 0;
  if (user_id > EJ_MAX_USER_ID) return 0;

  if (user_id >= uc->size) {
    int new_size = uc->size;
    struct userlist_user **new_map;

    if (!new_size) new_size = 1024;
    while (user_id >= new_size) new_size *= 2;
    XCALLOC(new_map, new_size);
    if (uc->size > 0)
      memcpy(new_map, uc->user_map, uc->size * sizeof(uc->user_map[0]));
    xfree(uc->user_map);
    uc->size = new_size;
    uc->user_map = new_map;
  }

  if ((u = uc->user_map[user_id])) {
    // FIXME: preserve the old value???
    // or introduce 'nocache' option???
    u_xml = (struct xml_tree*) u;
    userlist_elem_free_data(u_xml);
    u->id = user_id;

    MOVE_TO_FRONT(u_xml, uc->first, uc->last, left, right);
    return u;
  }

  if (uc->count == USERS_POOL_SIZE) {
    do_remove_login_from_pool(uc, (struct userlist_user*) uc->last);
  }

  u = (struct userlist_user*) userlist_node_alloc(USERLIST_T_USER);
  u->id = user_id;
  u_xml = (struct xml_tree*) u;
  LINK_FIRST(u_xml, uc->first, uc->last, left, right);
  uc->user_map[user_id] = u;
  uc->count++;
  return u;
}

static void
remove_login_from_pool(
        struct uldb_mysql_state *state,
        int user_id)
{
  struct users_cache *uc = &state->users;

  if (user_id <= 0 || user_id >= uc->size) return;
  do_remove_login_from_pool(uc, uc->user_map[user_id]);
}

static int
parse_login(
        struct uldb_mysql_state *state,
        struct userlist_user *u)
{
  if (handle_parse_spec(state, LOGIN_WIDTH, login_spec, u) < 0)
    goto fail;
  if (u->id <= 0) goto fail;
  if (u->passwd_method < USERLIST_PWD_PLAIN
      || u->passwd_method > USERLIST_PWD_LAST)
    goto fail;
  if (!u->login || !*u->login) goto fail;
  return 0;

 fail:
  return -1;
}

static void
unparse_login(
        struct uldb_mysql_state *state,
        FILE *fout,
        const struct userlist_user *u)
{
  handle_unparse_spec(state, fout, LOGIN_WIDTH, login_spec, u);
}

static int
fetch_login(
        struct uldb_mysql_state *state,
        int user_id,
        struct userlist_user **p_user)
{
  unsigned char cmdbuf[1024];
  int cmdlen = sizeof(cmdbuf);
  struct userlist_user *u = 0;

  *p_user = 0;
  if (user_id <= 0) goto fail;

  cmdlen = snprintf(cmdbuf, cmdlen, "SELECT * FROM %slogins WHERE user_id = %d ;",
                    state->table_prefix, user_id);
  if (mysql_real_query(state->conn, cmdbuf, cmdlen))
    db_error_fail(state);
  state->field_count = mysql_field_count(state->conn);
  if (state->field_count != LOGIN_WIDTH)
    db_wrong_field_count_fail(state, LOGIN_WIDTH);
  if (!(state->res = mysql_store_result(state->conn)))
    db_error_fail(state);
  state->row_count = mysql_num_rows(state->res);
  if (state->row_count < 0) db_error_fail(state);
  if (!state->row_count) return 0;
  if (state->row_count > 0) goto fail;
  if (!(state->row = mysql_fetch_row(state->res)))
    db_no_data_fail();
  state->lengths = mysql_fetch_lengths(state->res);
  if (!(u = allocate_login_on_pool(state, user_id))) goto fail;
  if (parse_login(state, u) < 0) goto fail;
  *p_user = u;
  return 1;

 fail:
  remove_login_from_pool(state, user_id);
  return -1;
}

/*
 * Local variables:
 *  compile-command: "make -C ../.."
 *  c-font-lock-extra-types: ("\\sw+_t" "FILE" "MYSQL")
 * End:
 */