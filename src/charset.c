/* vim:set ts=8 sts=4 sw=4 tw=0: */
/*
 * charset.c -
 *
 * Written By:  MURAOKA Taro <koron@tka.att.ne.jp>
 * Last Change: 16-Jun-2004.
 */

/*#include "migemo.h"*/

int migemo_cp932_char2int(const unsigned char* in, unsigned int* out);
int migemo_cp932_int2char(unsigned int in, unsigned char* out);
int migemo_eucjp_char2int(const unsigned char* in, unsigned int* out);
int migemo_eucjp_int2char(unsigned int in, unsigned char* out);
int migemo_utf8_char2int(const unsigned char* in, unsigned int* out);
int migemo_utf8_int2char(unsigned int in, unsigned char* out);
