/* vim:set ts=8 sts=4 sw=4 tw=0: */
/*
 * profile_speed.c - スピード計測
 *
 * Written By:  MURAOKA Taro <koron@tka.att.ne.jp>
 * Last Change: 20-Jun-2004.
 */

#include <stdio.h>
#include "migemo.h"

#ifndef DICTDIR
# define DICTDIR "../dict"
#endif

    int
main(int argc, char** argv)
{
    migemo* pmig;
    char* ans;
    char key[2] = { '\0', '\0' };

    printf("Start\n");
    pmig = migemo_open(DICTDIR "/migemo-dict");
    printf("Loaded\n");
    if (pmig != NULL)
    {
	for (key[0] = 'a'; key[0] <= 'z'; ++key[0])
	{
	    printf("Progress... key=%s\n", key);
	    ans = migemo_query(pmig, key);
	    migemo_release(pmig, ans);
	}
	migemo_close(pmig);
    }
    return 0;
}
