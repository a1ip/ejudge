/* -*- c -*- */
/* $Id$ */
#ifndef __SUPER_ACTIONS_H__
#define __SUPER_ACTIONS_H__

/* Copyright (C) 2004-2006 Alexander Chernov <cher@ispras.ru> */

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

enum
{
  SUPER_ACTION_VIEW_CONTEST = 1,
  SUPER_ACTION_OPEN_CONTEST,
  SUPER_ACTION_CLOSE_CONTEST,
  SUPER_ACTION_CLEAR_MESSAGES,
  SUPER_ACTION_SERVE_MNG_TEMP,        /* ! */
  SUPER_ACTION_SERVE_MNG,             /* ! */
  SUPER_ACTION_SERVE_MNG_RESUME,      /* ! */
  SUPER_ACTION_SERVE_MNG_STOP,        /* ! */
  SUPER_ACTION_SERVE_MNG_SUSPEND,     /* ! */
  SUPER_ACTION_SERVE_MNG_PROBE_RUN,
  SUPER_ACTION_SERVE_MNG_RESET_ERROR,
  SUPER_ACTION_SERVE_MNG_TERM,
  SUPER_ACTION_SERVE_LOG_TRUNC,
  SUPER_ACTION_SERVE_LOG_DEV_NULL,
  SUPER_ACTION_SERVE_LOG_FILE,
  SUPER_ACTION_SERVE_LOG_VIEW,
  SUPER_ACTION_RUN_MNG_TEMP,        /* ! */
  SUPER_ACTION_RUN_MNG,             /* ! */
  SUPER_ACTION_RUN_MNG_RESUME,      /* ! */
  SUPER_ACTION_RUN_MNG_STOP,        /* ! */
  SUPER_ACTION_RUN_MNG_SUSPEND,     /* ! */
  SUPER_ACTION_RUN_MNG_PROBE_RUN,   /* ! */
  SUPER_ACTION_RUN_MNG_RESET_ERROR,
  SUPER_ACTION_RUN_MNG_TERM,
  SUPER_ACTION_RUN_LOG_TRUNC,
  SUPER_ACTION_RUN_LOG_DEV_NULL,
  SUPER_ACTION_RUN_LOG_FILE,
  SUPER_ACTION_RUN_LOG_VIEW,
  SUPER_ACTION_CONTEST_RESTART,
  SUPER_ACTION_LOGOUT,
  SUPER_ACTION_CONTEST_VISIBLE,
  SUPER_ACTION_CONTEST_INVISIBLE,
  SUPER_ACTION_VIEW_CONTEST_XML,
  SUPER_ACTION_VIEW_SERVE_CFG,
  SUPER_ACTION_HIDE_HIDDEN,
  SUPER_ACTION_SHOW_HIDDEN,
  SUPER_ACTION_HIDE_CLOSED,
  SUPER_ACTION_SHOW_CLOSED,
  SUPER_ACTION_HIDE_UNMNG,
  SUPER_ACTION_SHOW_UNMNG,
  SUPER_ACTION_RESTART,         /* ! */
  SUPER_ACTION_CREATE_CONTEST,
  SUPER_ACTION_CREATE_CONTEST_2,
  SUPER_ACTION_CNTS_CHANGE_NAME,
  SUPER_ACTION_CNTS_CLEAR_NAME,
  SUPER_ACTION_CNTS_CHANGE_NAME_EN,
  SUPER_ACTION_CNTS_CLEAR_NAME_EN,
  SUPER_ACTION_CNTS_CHANGE_AUTOREGISTER,
  SUPER_ACTION_CNTS_CHANGE_TEAM_PASSWD,
  SUPER_ACTION_CNTS_CHANGE_MANAGED,
  SUPER_ACTION_CNTS_CHANGE_RUN_MANAGED,
  SUPER_ACTION_CNTS_CHANGE_CLEAN_USERS,
  SUPER_ACTION_CNTS_CHANGE_CLOSED,
  SUPER_ACTION_CNTS_CHANGE_INVISIBLE,
  SUPER_ACTION_CNTS_CHANGE_TIME_SKEW,
  SUPER_ACTION_CNTS_CHANGE_TEAM_LOGIN,
  SUPER_ACTION_CNTS_CHANGE_MEMBER_DELETE,
  SUPER_ACTION_CNTS_BASIC_VIEW,
  SUPER_ACTION_CNTS_ADVANCED_VIEW,
  SUPER_ACTION_CNTS_CHANGE_DEADLINE,
  SUPER_ACTION_CNTS_CLEAR_DEADLINE,
  SUPER_ACTION_CNTS_CHANGE_USERS_HEADER,
  SUPER_ACTION_CNTS_CLEAR_USERS_HEADER,
  SUPER_ACTION_CNTS_EDIT_USERS_HEADER,
  SUPER_ACTION_CNTS_CHANGE_USERS_FOOTER,
  SUPER_ACTION_CNTS_CLEAR_USERS_FOOTER,
  SUPER_ACTION_CNTS_EDIT_USERS_FOOTER,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_HEADER,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_HEADER,
  SUPER_ACTION_CNTS_EDIT_REGISTER_HEADER,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_FOOTER,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_FOOTER,
  SUPER_ACTION_CNTS_EDIT_REGISTER_FOOTER,
  SUPER_ACTION_CNTS_CHANGE_TEAM_HEADER,
  SUPER_ACTION_CNTS_CLEAR_TEAM_HEADER,
  SUPER_ACTION_CNTS_EDIT_TEAM_HEADER,
  SUPER_ACTION_CNTS_CHANGE_TEAM_FOOTER,
  SUPER_ACTION_CNTS_CLEAR_TEAM_FOOTER,
  SUPER_ACTION_CNTS_EDIT_TEAM_FOOTER,
  SUPER_ACTION_CNTS_CHANGE_USERS_HEAD_STYLE,
  SUPER_ACTION_CNTS_CLEAR_USERS_HEAD_STYLE,
  SUPER_ACTION_CNTS_CHANGE_USERS_PAR_STYLE,
  SUPER_ACTION_CNTS_CLEAR_USERS_PAR_STYLE,
  SUPER_ACTION_CNTS_CHANGE_USERS_TABLE_STYLE,
  SUPER_ACTION_CNTS_CLEAR_USERS_TABLE_STYLE,
  SUPER_ACTION_CNTS_CHANGE_USERS_VERB_STYLE,
  SUPER_ACTION_CNTS_CLEAR_USERS_VERB_STYLE,
  SUPER_ACTION_CNTS_CHANGE_USERS_TABLE_FORMAT,
  SUPER_ACTION_CNTS_CLEAR_USERS_TABLE_FORMAT,
  SUPER_ACTION_CNTS_CHANGE_USERS_TABLE_FORMAT_EN,
  SUPER_ACTION_CNTS_CLEAR_USERS_TABLE_FORMAT_EN,
  SUPER_ACTION_CNTS_CHANGE_USERS_TABLE_LEGEND,
  SUPER_ACTION_CNTS_CLEAR_USERS_TABLE_LEGEND,
  SUPER_ACTION_CNTS_CHANGE_USERS_TABLE_LEGEND_EN,
  SUPER_ACTION_CNTS_CLEAR_USERS_TABLE_LEGEND_EN,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_HEAD_STYLE,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_HEAD_STYLE,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_PAR_STYLE,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_PAR_STYLE,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_TABLE_STYLE,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_TABLE_STYLE,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_NAME_COMMENT,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_NAME_COMMENT,
  SUPER_ACTION_CNTS_CHANGE_ALLOWED_LANGUAGES,
  SUPER_ACTION_CNTS_CLEAR_ALLOWED_LANGUAGES,
  SUPER_ACTION_CNTS_CHANGE_CF_NOTIFY_EMAIL,
  SUPER_ACTION_CNTS_CLEAR_CF_NOTIFY_EMAIL,
  SUPER_ACTION_CNTS_CHANGE_CLAR_NOTIFY_EMAIL,
  SUPER_ACTION_CNTS_CLEAR_CLAR_NOTIFY_EMAIL,
  SUPER_ACTION_CNTS_CHANGE_DAILY_STAT_EMAIL,
  SUPER_ACTION_CNTS_CLEAR_DAILY_STAT_EMAIL,
  SUPER_ACTION_CNTS_CHANGE_TEAM_HEAD_STYLE,
  SUPER_ACTION_CNTS_CLEAR_TEAM_HEAD_STYLE,
  SUPER_ACTION_CNTS_CHANGE_TEAM_PAR_STYLE,
  SUPER_ACTION_CNTS_CLEAR_TEAM_PAR_STYLE,
  SUPER_ACTION_CNTS_HIDE_HTML_ATTRS,
  SUPER_ACTION_CNTS_SHOW_HTML_ATTRS,
  SUPER_ACTION_CNTS_HIDE_HTML_HEADERS,
  SUPER_ACTION_CNTS_SHOW_HTML_HEADERS,
  SUPER_ACTION_EDIT_CURRENT_CONTEST,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_EMAIL,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_EMAIL,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_URL,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_URL,
  SUPER_ACTION_CNTS_CHANGE_REGISTER_EMAIL_FILE,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_EMAIL_FILE,
  SUPER_ACTION_CNTS_EDIT_REGISTER_EMAIL_FILE,
  SUPER_ACTION_CNTS_FORGET,
  SUPER_ACTION_CNTS_COMMIT,
  SUPER_ACTION_CNTS_CHANGE_TEAM_URL,
  SUPER_ACTION_CNTS_CLEAR_TEAM_URL,
  SUPER_ACTION_CNTS_CHANGE_STANDINGS_URL,
  SUPER_ACTION_CNTS_CLEAR_STANDINGS_URL,
  SUPER_ACTION_CNTS_CHANGE_PROBLEMS_URL,
  SUPER_ACTION_CNTS_CLEAR_PROBLEMS_URL,
  SUPER_ACTION_CNTS_HIDE_PATHS,
  SUPER_ACTION_CNTS_SHOW_PATHS,
  SUPER_ACTION_CNTS_HIDE_NOTIFICATIONS,
  SUPER_ACTION_CNTS_SHOW_NOTIFICATIONS,
  SUPER_ACTION_CNTS_CHANGE_ROOT_DIR,
  SUPER_ACTION_CNTS_CLEAR_ROOT_DIR,
  SUPER_ACTION_CNTS_CHANGE_CONF_DIR,
  SUPER_ACTION_CNTS_CLEAR_CONF_DIR,
  SUPER_ACTION_CNTS_HIDE_ACCESS_RULES,
  SUPER_ACTION_CNTS_SHOW_ACCESS_RULES,
  SUPER_ACTION_CNTS_EDIT_REGISTER_ACCESS,
  SUPER_ACTION_CNTS_EDIT_USERS_ACCESS,
  SUPER_ACTION_CNTS_EDIT_MASTER_ACCESS,
  SUPER_ACTION_CNTS_EDIT_JUDGE_ACCESS,
  SUPER_ACTION_CNTS_EDIT_TEAM_ACCESS,
  SUPER_ACTION_CNTS_EDIT_SERVE_CONTROL_ACCESS,
  SUPER_ACTION_CNTS_DEFAULT_ACCESS,
  SUPER_ACTION_CNTS_CHANGE_RULE,
  SUPER_ACTION_CNTS_DELETE_RULE,
  SUPER_ACTION_CNTS_UP_RULE,
  SUPER_ACTION_CNTS_DOWN_RULE,
  SUPER_ACTION_CNTS_ADD_RULE,
  SUPER_ACTION_CNTS_HIDE_PERMISSIONS,
  SUPER_ACTION_CNTS_SHOW_PERMISSIONS,
  SUPER_ACTION_CNTS_EDIT_PERMISSION,
  SUPER_ACTION_CNTS_ADD_PERMISSION,
  SUPER_ACTION_CNTS_DELETE_PERMISSION,
  SUPER_ACTION_EDIT_CONTEST_XML,
  SUPER_ACTION_CHECK_TESTS,
  SUPER_ACTION_CNTS_SAVE_PERMISSIONS,
  SUPER_ACTION_CNTS_HIDE_FORM_FIELDS,
  SUPER_ACTION_CNTS_SHOW_FORM_FIELDS,
  SUPER_ACTION_CNTS_EDIT_FORM_FIELDS,
  SUPER_ACTION_CNTS_EDIT_CONTESTANT_FIELDS,
  SUPER_ACTION_CNTS_EDIT_RESERVE_FIELDS,
  SUPER_ACTION_CNTS_EDIT_COACH_FIELDS,
  SUPER_ACTION_CNTS_EDIT_ADVISOR_FIELDS,
  SUPER_ACTION_CNTS_EDIT_GUEST_FIELDS,
  SUPER_ACTION_CNTS_SAVE_FORM_FIELDS,
  SUPER_ACTION_CNTS_SAVE_CONTESTANT_FIELDS,
  SUPER_ACTION_CNTS_SAVE_RESERVE_FIELDS,
  SUPER_ACTION_CNTS_SAVE_COACH_FIELDS,
  SUPER_ACTION_CNTS_SAVE_ADVISOR_FIELDS,
  SUPER_ACTION_CNTS_SAVE_GUEST_FIELDS,
  SUPER_ACTION_CNTS_SAVE_USERS_HEADER,
  SUPER_ACTION_CNTS_SAVE_USERS_FOOTER,
  SUPER_ACTION_CNTS_SAVE_REGISTER_HEADER,
  SUPER_ACTION_CNTS_SAVE_REGISTER_FOOTER,
  SUPER_ACTION_CNTS_SAVE_TEAM_HEADER,
  SUPER_ACTION_CNTS_SAVE_TEAM_FOOTER,
  SUPER_ACTION_CNTS_SAVE_REGISTER_EMAIL_FILE,
  SUPER_ACTION_CNTS_READ_USERS_HEADER,
  SUPER_ACTION_CNTS_READ_USERS_FOOTER,
  SUPER_ACTION_CNTS_READ_REGISTER_HEADER,
  SUPER_ACTION_CNTS_READ_REGISTER_FOOTER,
  SUPER_ACTION_CNTS_READ_TEAM_HEADER,
  SUPER_ACTION_CNTS_READ_TEAM_FOOTER,
  SUPER_ACTION_CNTS_READ_REGISTER_EMAIL_FILE,
  SUPER_ACTION_CNTS_CLEAR_USERS_HEADER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_USERS_FOOTER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_HEADER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_FOOTER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_TEAM_HEADER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_TEAM_FOOTER_TEXT,
  SUPER_ACTION_CNTS_CLEAR_REGISTER_EMAIL_FILE_TEXT,
  SUPER_ACTION_CNTS_COPY_ACCESS,

  SUPER_ACTION_EDIT_CURRENT_GLOBAL,
  SUPER_ACTION_GLOB_CHANGE_DURATION,
  SUPER_ACTION_GLOB_UNLIMITED_DURATION,
  SUPER_ACTION_GLOB_CHANGE_TYPE,
  SUPER_ACTION_GLOB_CHANGE_FOG_TIME,
  SUPER_ACTION_GLOB_CHANGE_UNFOG_TIME,
  SUPER_ACTION_GLOB_DISABLE_FOG,
  SUPER_ACTION_GLOB_CHANGE_STAND_LOCALE,
  SUPER_ACTION_GLOB_SHOW_1,
  SUPER_ACTION_GLOB_HIDE_1,
  SUPER_ACTION_GLOB_CHANGE_SRC_VIEW,
  SUPER_ACTION_GLOB_CHANGE_REP_VIEW,
  SUPER_ACTION_GLOB_CHANGE_CE_VIEW,
  SUPER_ACTION_GLOB_CHANGE_JUDGE_REPORT,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_CLARS,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_TEAM_CLARS,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_SUBMIT_AFTER_OK,
  SUPER_ACTION_GLOB_CHANGE_IGNORE_COMPILE_ERRORS,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_FAILED_TEST_VIEW,
  SUPER_ACTION_GLOB_CHANGE_IGNORE_DUPICATED_RUNS,
  SUPER_ACTION_GLOB_CHANGE_REPORT_ERROR_CODE,
  SUPER_ACTION_GLOB_CHANGE_SHOW_DEADLINE,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_PRINTING,
  SUPER_ACTION_GLOB_CHANGE_PRUNE_EMPTY_USERS,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_FULL_ARCHIVE,
  SUPER_ACTION_GLOB_SHOW_2,
  SUPER_ACTION_GLOB_HIDE_2,
  SUPER_ACTION_GLOB_CHANGE_TEST_DIR,
  SUPER_ACTION_GLOB_CLEAR_TEST_DIR,
  SUPER_ACTION_GLOB_CHANGE_CORR_DIR,
  SUPER_ACTION_GLOB_CLEAR_CORR_DIR,
  SUPER_ACTION_GLOB_CHANGE_INFO_DIR,
  SUPER_ACTION_GLOB_CLEAR_INFO_DIR,
  SUPER_ACTION_GLOB_CHANGE_TGZ_DIR,
  SUPER_ACTION_GLOB_CLEAR_TGZ_DIR,
  SUPER_ACTION_GLOB_CHANGE_CHECKER_DIR,
  SUPER_ACTION_GLOB_CLEAR_CHECKER_DIR,
  SUPER_ACTION_GLOB_CHANGE_CONTEST_START_CMD,
  SUPER_ACTION_GLOB_CLEAR_CONTEST_START_CMD,
  SUPER_ACTION_GLOB_EDIT_CONTEST_START_CMD,
  SUPER_ACTION_GLOB_SHOW_3,
  SUPER_ACTION_GLOB_HIDE_3,
  SUPER_ACTION_GLOB_CHANGE_MAX_RUN_SIZE,
  SUPER_ACTION_GLOB_CHANGE_MAX_RUN_TOTAL,
  SUPER_ACTION_GLOB_CHANGE_MAX_RUN_NUM,
  SUPER_ACTION_GLOB_CHANGE_MAX_CLAR_SIZE,
  SUPER_ACTION_GLOB_CHANGE_MAX_CLAR_TOTAL,
  SUPER_ACTION_GLOB_CHANGE_MAX_CLAR_NUM,
  SUPER_ACTION_GLOB_CHANGE_TEAM_PAGE_QUOTA,
  SUPER_ACTION_GLOB_SHOW_4,
  SUPER_ACTION_GLOB_HIDE_4,
  SUPER_ACTION_GLOB_CHANGE_TEAM_INFO_URL,
  SUPER_ACTION_GLOB_CLEAR_TEAM_INFO_URL,
  SUPER_ACTION_GLOB_CHANGE_PROB_INFO_URL,
  SUPER_ACTION_GLOB_CLEAR_PROB_INFO_URL,
  SUPER_ACTION_GLOB_CHANGE_STAND_FILE_NAME,
  SUPER_ACTION_GLOB_CLEAR_STAND_FILE_NAME,
  SUPER_ACTION_GLOB_CHANGE_USERS_ON_PAGE,
  SUPER_ACTION_GLOB_CHANGE_STAND_HEADER_FILE,
  SUPER_ACTION_GLOB_CLEAR_STAND_HEADER_FILE,
  SUPER_ACTION_GLOB_EDIT_STAND_HEADER_FILE,
  SUPER_ACTION_GLOB_CHANGE_STAND_FOOTER_FILE,
  SUPER_ACTION_GLOB_CLEAR_STAND_FOOTER_FILE,
  SUPER_ACTION_GLOB_EDIT_STAND_FOOTER_FILE,
  SUPER_ACTION_GLOB_CHANGE_STAND_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CLEAR_STAND_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CHANGE_STAND_IGNORE_AFTER,
  SUPER_ACTION_GLOB_CLEAR_STAND_IGNORE_AFTER,
  SUPER_ACTION_GLOB_CHANGE_CONTEST_FINISH_TIME,
  SUPER_ACTION_GLOB_CLEAR_CONTEST_FINISH_TIME,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_STAND2,
  SUPER_ACTION_GLOB_CHANGE_STAND2_FILE_NAME,
  SUPER_ACTION_GLOB_CLEAR_STAND2_FILE_NAME,
  SUPER_ACTION_GLOB_CHANGE_STAND2_HEADER_FILE,
  SUPER_ACTION_GLOB_CLEAR_STAND2_HEADER_FILE,
  SUPER_ACTION_GLOB_EDIT_STAND2_HEADER_FILE,
  SUPER_ACTION_GLOB_CHANGE_STAND2_FOOTER_FILE,
  SUPER_ACTION_GLOB_CLEAR_STAND2_FOOTER_FILE,
  SUPER_ACTION_GLOB_EDIT_STAND2_FOOTER_FILE,
  SUPER_ACTION_GLOB_CHANGE_STAND2_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CLEAR_STAND2_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_PLOG,
  SUPER_ACTION_GLOB_CHANGE_PLOG_FILE_NAME,
  SUPER_ACTION_GLOB_CLEAR_PLOG_FILE_NAME,
  SUPER_ACTION_GLOB_CHANGE_PLOG_HEADER_FILE,
  SUPER_ACTION_GLOB_CLEAR_PLOG_HEADER_FILE,
  SUPER_ACTION_GLOB_EDIT_PLOG_HEADER_FILE,
  SUPER_ACTION_GLOB_CHANGE_PLOG_FOOTER_FILE,
  SUPER_ACTION_GLOB_CLEAR_PLOG_FOOTER_FILE,
  SUPER_ACTION_GLOB_EDIT_PLOG_FOOTER_FILE,
  SUPER_ACTION_GLOB_CHANGE_PLOG_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CLEAR_PLOG_SYMLINK_DIR,
  SUPER_ACTION_GLOB_CHANGE_PLOG_UPDATE_TIME,
  SUPER_ACTION_GLOB_SHOW_5,
  SUPER_ACTION_GLOB_HIDE_5,
  SUPER_ACTION_GLOB_CHANGE_STAND_TABLE_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_TABLE_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PLACE_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PLACE_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_TEAM_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_TEAM_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PROB_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PROB_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SOLVED_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_SOLVED_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SCORE_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_SCORE_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PENALTY_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PENALTY_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SHOW_OK_TIME,
  SUPER_ACTION_GLOB_CHANGE_STAND_SHOW_ATT_NUM,
  SUPER_ACTION_GLOB_CHANGE_STAND_SORT_BY_SOLVED,  
  SUPER_ACTION_GLOB_CHANGE_IGNORE_SUCCESS_TIME,
  SUPER_ACTION_GLOB_CHANGE_STAND_TIME_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_TIME_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SUCCESS_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_SUCCESS_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_FAIL_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_FAIL_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_TRANS_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_TRANS_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SELF_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_SELF_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_V_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_V_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_R_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_R_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_U_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_U_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_EXTRA_COL,
  SUPER_ACTION_GLOB_CHANGE_STAND_EXTRA_FORMAT,
  SUPER_ACTION_GLOB_CLEAR_STAND_EXTRA_FORMAT,
  SUPER_ACTION_GLOB_CHANGE_STAND_EXTRA_LEGEND,
  SUPER_ACTION_GLOB_CLEAR_STAND_EXTRA_LEGEND,
  SUPER_ACTION_GLOB_CHANGE_STAND_EXTRA_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_EXTRA_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_SHOW_WARN_NUMBER,
  SUPER_ACTION_GLOB_CHANGE_STAND_WARN_NUMBER_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_WARN_NUMBER_ATTR,
  SUPER_ACTION_GLOB_SHOW_6,
  SUPER_ACTION_GLOB_HIDE_6,
  SUPER_ACTION_GLOB_SHOW_7,
  SUPER_ACTION_GLOB_HIDE_7,
  SUPER_ACTION_GLOB_CHANGE_SLEEP_TIME,
  SUPER_ACTION_GLOB_CHANGE_SERVE_SLEEP_TIME,
  SUPER_ACTION_GLOB_CHANGE_AUTOUPDATE_STANDINGS,
  SUPER_ACTION_GLOB_CHANGE_ROUNDING_MODE,
  SUPER_ACTION_GLOB_CHANGE_MAX_FILE_LENGTH,
  SUPER_ACTION_GLOB_CHANGE_MAX_LINE_LENGTH,
  SUPER_ACTION_GLOB_CHANGE_INACTIVITY_TIMEOUT,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_AUTO_TESTING,
  SUPER_ACTION_GLOB_CHANGE_DISABLE_TESTING,
  SUPER_ACTION_GLOB_CHANGE_CR_SERIALIZATION_KEY,
  SUPER_ACTION_GLOB_CHANGE_SHOW_ASTR_TIME,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_CONTINUE,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_REPORT_UPLOAD,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_RUNLOG_MERGE,
  SUPER_ACTION_GLOB_CHANGE_USE_COMPILATION_SERVER,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_L10N,
  SUPER_ACTION_GLOB_CHANGE_CHARSET,
  SUPER_ACTION_GLOB_CLEAR_CHARSET,
  SUPER_ACTION_GLOB_CHANGE_TEAM_DOWNLOAD_TIME,
  SUPER_ACTION_GLOB_DISABLE_TEAM_DOWNLOAD_TIME,
  SUPER_ACTION_GLOB_CHANGE_CPU_BOGOMIPS,
  SUPER_ACTION_GLOB_DETECT_CPU_BOGOMIPS,
  SUPER_ACTION_GLOB_CHANGE_SECURE_RUN,
  SUPER_ACTION_GLOB_CHANGE_ENABLE_MEMORY_LIMIT_ERROR,
  SUPER_ACTION_GLOB_CHANGE_STAND_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PAGE_TABLE_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PAGE_TABLE_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PAGE_CUR_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PAGE_CUR_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PAGE_ROW_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PAGE_ROW_ATTR,
  SUPER_ACTION_GLOB_CHANGE_STAND_PAGE_COL_ATTR,
  SUPER_ACTION_GLOB_CLEAR_STAND_PAGE_COL_ATTR,

  SUPER_ACTION_EDIT_CURRENT_LANG,
  SUPER_ACTION_LANG_SHOW_DETAILS,
  SUPER_ACTION_LANG_HIDE_DETAILS,
  SUPER_ACTION_LANG_DEACTIVATE,
  SUPER_ACTION_LANG_ACTIVATE,
  SUPER_ACTION_LANG_CHANGE_DISABLED,
  SUPER_ACTION_LANG_CHANGE_LONG_NAME,
  SUPER_ACTION_LANG_CLEAR_LONG_NAME,
  SUPER_ACTION_LANG_CHANGE_DISABLE_AUTO_TESTING,
  SUPER_ACTION_LANG_CHANGE_DISABLE_TESTING,
  SUPER_ACTION_LANG_CHANGE_OPTS,
  SUPER_ACTION_LANG_CLEAR_OPTS,

  SUPER_ACTION_EDIT_CURRENT_PROB,
  SUPER_ACTION_PROB_ADD_ABSTRACT,
  SUPER_ACTION_PROB_ADD,
  SUPER_ACTION_PROB_SHOW_DETAILS,
  SUPER_ACTION_PROB_HIDE_DETAILS,
  SUPER_ACTION_PROB_DELETE,
  SUPER_ACTION_PROB_CHANGE_SHORT_NAME,
  SUPER_ACTION_PROB_CLEAR_SHORT_NAME,
  SUPER_ACTION_PROB_CHANGE_LONG_NAME,
  SUPER_ACTION_PROB_CLEAR_LONG_NAME,
  SUPER_ACTION_PROB_CHANGE_SUPER,
  SUPER_ACTION_PROB_CHANGE_USE_STDIN,
  SUPER_ACTION_PROB_CHANGE_USE_STDOUT,
  SUPER_ACTION_PROB_CHANGE_BINARY_INPUT,
  SUPER_ACTION_PROB_CHANGE_TIME_LIMIT,
  SUPER_ACTION_PROB_CHANGE_TIME_LIMIT_MILLIS,
  SUPER_ACTION_PROB_CHANGE_REAL_TIME_LIMIT,
  SUPER_ACTION_PROB_CHANGE_TEAM_ENABLE_REP_VIEW,
  SUPER_ACTION_PROB_CHANGE_TEAM_ENABLE_CE_VIEW,
  SUPER_ACTION_PROB_CHANGE_TEAM_SHOW_JUDGE_REPORT,
  SUPER_ACTION_PROB_CHANGE_DISABLE_TESTING,
  SUPER_ACTION_PROB_CHANGE_DISABLE_AUTO_TESTING,
  SUPER_ACTION_PROB_CHANGE_ENABLE_COMPILATION,
  SUPER_ACTION_PROB_CHANGE_FULL_SCORE,
  SUPER_ACTION_PROB_CHANGE_TEST_SCORE,
  SUPER_ACTION_PROB_CHANGE_RUN_PENALTY,
  SUPER_ACTION_PROB_CHANGE_DISQUALIFIED_PENALTY,
  SUPER_ACTION_PROB_CHANGE_VARIABLE_FULL_SCORE,
  SUPER_ACTION_PROB_CHANGE_TEST_SCORE_LIST,
  SUPER_ACTION_PROB_CLEAR_TEST_SCORE_LIST,
  SUPER_ACTION_PROB_CHANGE_SCORE_TESTS,
  SUPER_ACTION_PROB_CLEAR_SCORE_TESTS,
  SUPER_ACTION_PROB_CHANGE_TESTS_TO_ACCEPT,
  SUPER_ACTION_PROB_CHANGE_ACCEPT_PARTIAL,
  SUPER_ACTION_PROB_SHOW_ADVANCED,
  SUPER_ACTION_PROB_HIDE_ADVANCED,
  SUPER_ACTION_PROB_CHANGE_HIDDEN,
  SUPER_ACTION_PROB_CHANGE_STAND_HIDE_TIME,
  SUPER_ACTION_PROB_CHANGE_CHECKER_REAL_TIME_LIMIT,
  SUPER_ACTION_PROB_CHANGE_MAX_VM_SIZE,
  SUPER_ACTION_PROB_CHANGE_MAX_STACK_SIZE,
  SUPER_ACTION_PROB_CHANGE_INPUT_FILE,
  SUPER_ACTION_PROB_CLEAR_INPUT_FILE,
  SUPER_ACTION_PROB_CHANGE_OUTPUT_FILE,
  SUPER_ACTION_PROB_CLEAR_OUTPUT_FILE,
  SUPER_ACTION_PROB_CHANGE_USE_CORR,
  SUPER_ACTION_PROB_CHANGE_USE_INFO,
  SUPER_ACTION_PROB_CHANGE_TEST_DIR,
  SUPER_ACTION_PROB_CLEAR_TEST_DIR,
  SUPER_ACTION_PROB_CHANGE_CORR_DIR,
  SUPER_ACTION_PROB_CLEAR_CORR_DIR,
  SUPER_ACTION_PROB_CHANGE_INFO_DIR,
  SUPER_ACTION_PROB_CLEAR_INFO_DIR,
  SUPER_ACTION_PROB_CHANGE_TEST_SFX,
  SUPER_ACTION_PROB_CLEAR_TEST_SFX,
  SUPER_ACTION_PROB_CHANGE_TEST_PAT,
  SUPER_ACTION_PROB_CLEAR_TEST_PAT,
  SUPER_ACTION_PROB_CHANGE_CORR_SFX,
  SUPER_ACTION_PROB_CLEAR_CORR_SFX,
  SUPER_ACTION_PROB_CHANGE_CORR_PAT,
  SUPER_ACTION_PROB_CLEAR_CORR_PAT,
  SUPER_ACTION_PROB_CHANGE_INFO_SFX,
  SUPER_ACTION_PROB_CLEAR_INFO_SFX,
  SUPER_ACTION_PROB_CHANGE_INFO_PAT,
  SUPER_ACTION_PROB_CLEAR_INFO_PAT,
  SUPER_ACTION_PROB_CHANGE_STANDARD_CHECKER,
  SUPER_ACTION_PROB_CHANGE_SCORE_BONUS,
  SUPER_ACTION_PROB_CLEAR_SCORE_BONUS,
  SUPER_ACTION_PROB_CHANGE_CHECK_CMD,
  SUPER_ACTION_PROB_CLEAR_CHECK_CMD,
  SUPER_ACTION_PROB_CHANGE_CHECKER_ENV,
  SUPER_ACTION_PROB_CLEAR_CHECKER_ENV,
  SUPER_ACTION_PROB_CHANGE_LANG_TIME_ADJ,
  SUPER_ACTION_PROB_CLEAR_LANG_TIME_ADJ,
  SUPER_ACTION_PROB_CHANGE_START_DATE,
  SUPER_ACTION_PROB_CLEAR_START_DATE,
  SUPER_ACTION_PROB_CHANGE_DEADLINE,
  SUPER_ACTION_PROB_CLEAR_DEADLINE,
  SUPER_ACTION_PROB_CHANGE_VARIANT_NUM,
  SUPER_ACTION_PROB_EDIT_VARIANTS,
  SUPER_ACTION_PROB_EDIT_VARIANTS_2,
  SUPER_ACTION_PROB_CHANGE_VARIANTS,
  SUPER_ACTION_PROB_DELETE_VARIANTS,

  SUPER_ACTION_GLOB_SAVE_CONTEST_START_CMD,
  SUPER_ACTION_GLOB_READ_CONTEST_START_CMD,
  SUPER_ACTION_GLOB_CLEAR_CONTEST_START_CMD_TEXT,
  SUPER_ACTION_GLOB_SAVE_STAND_HEADER,
  SUPER_ACTION_GLOB_READ_STAND_HEADER,
  SUPER_ACTION_GLOB_CLEAR_STAND_HEADER_TEXT,
  SUPER_ACTION_GLOB_SAVE_STAND_FOOTER,
  SUPER_ACTION_GLOB_READ_STAND_FOOTER,
  SUPER_ACTION_GLOB_CLEAR_STAND_FOOTER_TEXT,
  SUPER_ACTION_GLOB_SAVE_STAND2_HEADER,
  SUPER_ACTION_GLOB_READ_STAND2_HEADER,
  SUPER_ACTION_GLOB_CLEAR_STAND2_HEADER_TEXT,
  SUPER_ACTION_GLOB_SAVE_STAND2_FOOTER,
  SUPER_ACTION_GLOB_READ_STAND2_FOOTER,
  SUPER_ACTION_GLOB_CLEAR_STAND2_FOOTER_TEXT,
  SUPER_ACTION_GLOB_SAVE_PLOG_HEADER,
  SUPER_ACTION_GLOB_READ_PLOG_HEADER,
  SUPER_ACTION_GLOB_CLEAR_PLOG_HEADER_TEXT,
  SUPER_ACTION_GLOB_SAVE_PLOG_FOOTER,
  SUPER_ACTION_GLOB_READ_PLOG_FOOTER,
  SUPER_ACTION_GLOB_CLEAR_PLOG_FOOTER_TEXT,

  SUPER_ACTION_VIEW_NEW_SERVE_CFG,
  SUPER_ACTION_LANG_UPDATE_VERSIONS,

  SUPER_ACTION_LAST,
};

#endif /* __SUPER_ACTIONS_H__ */
