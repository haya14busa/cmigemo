# vim:set ts=8 sts=8 sw=8 tw=0:
# Last Change: 20-Jun-2004.

DICTDIR = ../../dict

OUTPUT = qspeed romaji

MIGEMO_SRC = ../charset.c ../filename.c ../migemo.c ../mnode.c ../romaji.c \
	     ../rxgen.c ../wordbuf.c ../wordlist.c
ROMAJI_SRC = romaji_main.c ../romaji.c ../wordbuf.c ../charset.c
QSPEED_SRC = profile_speed.c $(MIGEMO_SRC)

CCFLAGS = -I. -I.. -DDICTDIR=\"$(DICTDIR)\" -D_DEBUG

qspeed: $(QSPEED_SRC)
	$(CC) $(CCFLAGS) -o $@ -pg $(QSPEED_SRC)

romaji: $(ROMAJI_SRC)
	$(CC) $(CCFLAGS) -o $@ $(ROMAJI_SRC)

clean:
	rm -f *.obj *.o *.exe
	rm -f gmon.out *.log
	rm -f $(OUTPUT)
