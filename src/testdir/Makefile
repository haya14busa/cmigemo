# vim:set ts=8 sts=8 sw=8 tw=0:
# Last Change: 18-Jun-2004.

DICTDIR=../../dict
CCFLAGS=-I. -I.. -DDICTDIR=\"$(DICTDIR)\"

romaji_main: romaji_main.c ../romaji.c ../wordbuf.c
	$(CC) $(CCFLAGS) -o $@ romaji_main.c ../romaji.c ../wordbuf.c

clean:
	rm -f *.obj *.o *.exe
