/* vim:set ts=8 sts=4 sw=4 tw=0: */
/*
 * charset.h -
 *
 * Written By:  MURAOKA Taro <koron@tka.att.ne.jp>
 * Last Change: 17-Jun-2004.
 */

#ifndef CHARSET_H
# define CHARSET_H

enum {
    CHARSET_NONE = 0,
    CHARSET_CP932 = 1,
    CHARSET_EUCJP = 2,
    CHARSET_UTF8 = 3,
};

#ifdef __cplusplus
extern "C" {
#endif

int cp932_char2int(const unsigned char* in, unsigned int* out);
int cp932_int2char(unsigned int in, unsigned char* out);
int eucjp_char2int(const unsigned char* in, unsigned int* out);
int eucjp_int2char(unsigned int in, unsigned char* out);
int utf8_char2int(const unsigned char* in, unsigned int* out);
int utf8_int2char(unsigned int in, unsigned char* out);

int detect_charset(const unsigned char* buf, int len);

#ifdef __cplusplus
}
#endif

#endif /* CHARSET_H */
