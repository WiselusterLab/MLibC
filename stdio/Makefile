AR = ar
CC = gcc
CFLAGS = -nostdinc -I${INCLUDE} -m16 -O3
INCLUDE = $(shell pwd)/../include
DOSBOX = dosbox
LD = gcc
LDFLAGS = -nostdlib -Wl,-Ttext,0x0100,--oformat=binary
RANLIB = ranlib

LIBRARY = libstdio.a
SOURCES = $(wildcard *.c)
OBJECTS = $(subst .c,.o,${SOURCES})

TESTSRC = test.s
TESTOBJ = $(subst .s,.o,${TESTSRC})
TESTBIN = $(subst .s,.com,${TESTSRC})

.PHONY: all clean test

all: ${LIBRARY}
	

clean:
	rm -rf ${LIBRARY} ${OBJECTS} ${TESTOBJ} ${TESTBIN}

test:
	${CC} ${CFLAGS} -c ${TESTSRC}
	${LD} ${LDFLAGS} ${TESTOBJ} ${LIBRARY} -o ${TESTBIN}
	${DOSBOX} ${TESTBIN}

${LIBRARY}: ${OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${OBJECTS}: ${SOURCES}
	${CC} ${CFLAGS} -c $^
