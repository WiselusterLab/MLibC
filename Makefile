AR = ar
CC = gcc
DOSBOX = dosbox
RANLIB = ranlib
SUBDIR = stdio

.PHONY: all clean test

all: 
	make -C ${SUBDIR} $@

clean:
	make -C ${SUBDIR} $@

test: 
	make -C ${SUBDIR} $@
