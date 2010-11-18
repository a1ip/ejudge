/* -*- c -*- */
/* $Id$ */
#ifndef __T3_PACKETS_H__
#define __T3_PACKETS_H__

/* Copyright (C) 2010 Alexander Chernov <cher@ejudge.ru> */

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

#include <stdio.h>

struct t3_in_submit
{
  unsigned char *prob_guid;
  unsigned char *user_guid;
  unsigned char *prog_lang;
  unsigned char *prog_charset;
  int mime_type;
  unsigned char *filename;
};

struct t3_in_packet
{
  unsigned char *exam_guid;
  int submit_count;
  struct t3_in_submit *submits;
};

struct t3_in_packet *
t3_in_packet_parse_str(FILE *log, const unsigned char *str);
struct t3_in_packet *
t3_in_packet_free(struct t3_in_packet *p);

struct t3_out_submit
{
  unsigned char *prob_guid;
  unsigned char *user_guid;
  int score;
  unsigned char *mark;
  unsigned char *data;
};

struct t3_out_packet
{
  unsigned char *exam_guid;
  int submit_count;
  struct t3_out_submit *submits;
};

struct t3_out_packet *
t3_out_packet_make_from_in(struct t3_in_packet *p);

struct t3_out_packet *
t3_out_packet_free(struct t3_out_packet *p);

void
t3_out_packet_write(FILE *out, struct t3_out_packet *p);

#endif /* __T3_PACKETS_H__ */