/* vim:set ts=8 sts=4 sw=4 tw=0: */
/*
 * charset.c -
 *
 * Written By:  MURAOKA Taro <koron@tka.att.ne.jp>
 * Last Change: 17-Jun-2004.
 */

/*#include "migemo.h"*/

    int
migemo_cp932_char2int(const unsigned char* in, unsigned int* out)
{
    if (((0x81 <= in[0] && in[0] <= 0x9f)
		|| (0xe0 <= in[0] && in[0] <= 0xf0))
	    && ((0x40 <= in[1] && in[1] <= 0x7e)
		|| (0x80 <= in[1] && in[1] <= 0xfc)))
    {
	*out = (unsigned int)in[0] << 8 | (unsigned int)in[1];
	return 2;
    }
    else
    {
	*out = in[0];
	return 1;
    }
}

    int
migemo_cp932_int2char(unsigned int in, unsigned char* out)
{
    if (in >= 0x100)
    {
	if (out)
	{
	    out[0] = (unsigned char)((in >> 8) & 0xFF);
	    out[1] = (unsigned char)(in & 0xFF);
	}
	return 2;
    }
    else
	return 0;
}

#define IS_EUC_RANGE(c) (0xa1 <= (c) && (c) <= 0xfe)

    int
migemo_eucjp_char2int(const unsigned char* in, unsigned int* out)
{
    if ((in[0] == 0x8e && 0xa0 <= in[1] && in[1] <= 0xdf)
	    || (IS_EUC_RANGE(in[0]) && IS_EUC_RANGE(in[1])))
    {
	*out = (unsigned int)in[0] << 8 | (unsigned int)in[1];
	return 2;
    }
    else
    {
	*out = in[0];
	return 1;
    }
}

    int
migemo_eucjp_int2char(unsigned int in, unsigned char* out)
{
    /* CP932‚Æ“à—e‚Í“¯‚¶‚¾‚ª«—ˆJISX0213‚É‘Î‰‚³‚¹‚é‚½‚ß‚É•ª—£‚µ‚Ä‚¨‚­ */
    if (in >= 0x100)
    {
	if (out)
	{
	    out[0] = (unsigned char)((in >> 8) & 0xFF);
	    out[1] = (unsigned char)(in & 0xFF);
	}
	return 2;
    }
    else
	return 0;
}

int migemo_utf8_char2int(const unsigned char* in, unsigned int* out);
int migemo_utf8_int2char(unsigned int in, unsigned char* out);
