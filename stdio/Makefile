CC16 = ../cc16

SOURCES = $(wildcard *.c)
OBJECTS = $(foreach el,${SOURCES},$(subst .c,.o,${el}))

.PHONY: all clean

all: ${LIBRARY}
	

clean:
	rm -rf ${OBJECTS}

${OBJECTS}: ${SOURCES}
	${CC16} $^
