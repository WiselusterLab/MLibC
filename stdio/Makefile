AR = ar
CC = gcc
CFLAGS = -nostdinc -std=gnu11 -I${INCLUDE} -m16 -O3
DOSBOX = dosbox
INCLUDE = ${PWD}/../include
LD = ${CC}
LDFLAGS = -nostdlib -m16 -Wl,-Ttext,0x0100,--oformat=binary
OBJCOPY = objcopy
RANLIB = ranlib
PWD = $(shell pwd)

LIBRARY = lib$(shell basename ${PWD}).a
SOURCES = $(wildcard *.c)
OBJECTS = $(foreach el,${SOURCES},$(subst .c,.o,${el}))

TESTSRC = test.s
TESTOBJ = $(subst .s,.o,${TESTSRC})
TESTBIN = $(subst .s,.com,${TESTSRC})

.PHONY: all clean test

all: ${LIBRARY}
	

clean:
	rm -rf ${LIBRARY} ${OBJECTS} ${TESTOBJ} ${TESTBIN}

test: all
	${CC} ${CFLAGS} -c ${TESTSRC}
	${LD} ${LDFLAGS} ${TESTOBJ} ${LIBRARY} -o ${TESTBIN}
	${DOSBOX} ${TESTBIN}

${LIBRARY}: ${OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${OBJECTS}: ${SOURCES}
	${CC} ${CFLAGS} -c $^
	for file in ${OBJECTS};\
	do\
		${OBJCOPY} -R.eh_frame $${file};\
		${OBJCOPY} -R.comment $${file};\
	done
