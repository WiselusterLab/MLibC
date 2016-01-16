CC = ${CROSS_COMPILE}gcc
CFLAGS = -nostdinc -std=gnu11 -I${INCLUDE} -m16 -O3
CROSS_COMPILE = 
OBJCOPY = ${CROSS_COMPILE}objcopy
RM = rm
RMFLAGS = -rf

INCLUDE = ../include
HEADERS = $(wildcard ${INCLUDE}/*.h)
SOURCES = $(wildcard *.c)
OBJECTS = $(foreach el,${SOURCES},$(subst .c,.o,${el}))

.PHONY: all clean

all: ${OBJECTS}
	

clean:
	rm -rf ${OBJECTS}

${OBJECTS}: ${HEADERS} ${SOURCES}
	${CC} ${CFLAGS} -c ${SOURCES}
	for file in ${OBJECTS};\
	do\
		${OBJCOPY} -R.eh_frame -R.comment $${file} $${file};\
	done
