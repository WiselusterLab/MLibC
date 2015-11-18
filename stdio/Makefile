AR = ar
CC = gcc
DOSBOX = dosbox
RANLIB = ranlib

INCLUDE = ../include
LIBRARY = libstdio.a
SOURCES = $(wildcard *.c)
OBJECTS = $(subst .c,.o,${SOURCES})

TESTSRC = hello.s
TESTBIN = $(subst .s,.com,${TESTSRC})

.PHONY: all clean test

all: ${LIBRARY}
	

clean:
	rm -rf ${LIBRARY} ${OBJECTS} ${TESTBIN}

test:
	${CC} -nostdlib -m16 -O3 ${TESTSRC} -Wl,-Ttext,0x0100,--oformat=binary,${LIBRARY} -o ${TESTBIN}
	${DOSBOX} ${TESTBIN}

${LIBRARY}: ${OBJECTS}
	${AR} rc $@ $^
	${RANLIB} $@

${OBJECTS}: ${SOURCES}
	${CC} -I${INCLUDE} -m16 -O3 -c $^
