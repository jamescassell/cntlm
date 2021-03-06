/*
 * These are NTLM authentication routines for the main module of CNTLM
 *
 * CNTLM is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 *
 * CNTLM is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51 Franklin
 * St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Copyright (c) 2007 David Kubicek
 *
 */

#ifndef _NTLM_H
#define _NTLM_H

#include "xcrypt.h"

#define NTLM_BUFSIZE		1024
#define NTLM_CHALLENGE_MIN	24

extern char *ntlm_hash_lm_password(char *password);
extern char *ntlm_hash_nt_password(char *password);
extern char *ntlm2_hash_password(char *username, char *domain, char *password);
extern int ntlm_request(char **dst, char *hostname, char *domain, int ntlm2, int nt, int lm, uint32_t flags);
extern int ntlm_response(char **dst, char *challenge, int challen, char *username, char *passnt2, char *passnt, char *passlm, char *hostname, char *domain, int ntlm2, int nt, int lm);

#endif /* _NTLM_H */
