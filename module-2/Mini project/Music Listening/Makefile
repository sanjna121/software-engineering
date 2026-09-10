CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all: music_logger

music_logger: music_logger.c
	$(CC) $(CFLAGS) -o music_logger music_logger.c

clean:
	rm -f music_logger music_log.txt

.PHONY: all clean
