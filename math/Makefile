CC = gcc
CFLAGS = -nostdinc -std=gnu11 -I$(shell pwd)/../include -m16 -O3
OBJCOPY = objcopy
RM = rm
RMFLAGS = -rf

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
		${OBJCOPY} -R.eh_frame -R.comment $${file} $${file};\
	done
