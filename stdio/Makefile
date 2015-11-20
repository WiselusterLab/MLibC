CC = gcc
CFLAGS = -nostdinc -std=gnu11 -I../include -m16 -O3

SOURCES = $(wildcard *.c)
OBJECTS = $(foreach el,${SOURCES},$(subst .c,.o,${el}))

.PHONY: all clean

all: ${OBJECTS}
	

clean:
	rm -rf ${OBJECTS}

${OBJECTS}: ${SOURCES}
	${CC} ${CFLAGS} -c $^
	for file in ${OBJECTS};\
	do\
		objcopy -R.eh_frame ${file} ${file};\
		objcopy -R.comment ${file} ${file};\
	done
