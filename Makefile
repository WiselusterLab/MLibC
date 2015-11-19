AR = ar
CC = gcc
INCLUDE = $(shell pwd)/include
CFLAGS = -nostdinc -std=gnu11 -I${INCLUDE} -m16 -O3
DOSBOX = dosbox
LD = gcc
LDFLAGS = -nostdlib -m16 -Wl,-Ttext,0x0100,--oformat=binary
RANLIB = ranlib
SUBDIR = stdio

.PHONY: all clean test

all: 
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done

clean:
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done

test: 
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done
