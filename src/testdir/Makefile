# vim:set ts=8 sts=8 sw=8 tw=0:
# Last Change: 19-Jun-2004.

DICTDIR = ../../dict
CCFLAGS = -I. -I.. -DDICTDIR=\"$(DICTDIR)\" -D_DEBUG

ROMAJI_SRC = romaji_main.c ../romaji.c ../wordbuf.c ../charset.c

romaji: $(ROMAJI_SRC)
	$(CC) $(CCFLAGS) -o $@ $(ROMAJI_SRC)

clean:
	rm -f *.obj *.o *.exe
