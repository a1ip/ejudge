/* -*- c -*- */
/* $Id$ */
#ifndef __L10N_H__
#define __L10N_H__

/* Copyright (C) 2003-2014 Alexander Chernov <cher@ejudge.ru> */

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

void l10n_prepare(int l10n_flag, unsigned char const *l10n_dir);
void l10n_setlocale(int locale_id);
void l10n_resetlocale(void);
void l10n_html_locale_select(FILE *fout, int locale_id);
int  l10n_parse_locale(const unsigned char *locale_str);
const unsigned char *l10n_unparse_locale(int n);

void
l10n_html_locale_select_2(
        FILE *out_f,
        const unsigned char *id,
        const unsigned char *cl,
        const unsigned char *name,
        const unsigned char *onchange,
        int locale_id);

#endif /* __L10N_H__ */

