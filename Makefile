AR = ar
ARFLAGS = rcu
CC = gcc
CFLAGS = -nostdinc -std=gnu11 -I${INCLUDE} -m16 -O3
INCLUDE = $(shell pwd)/include
HEADERS = $(wildcard ${INCLUDE}/*.h)
OBJCOPY = objcopy
RANLIB = ranlib
RM = rm
RMFLAGS = -rf

LIBC = libc.a
LIBM = libm.a
LIBC_SUBDIR = conio crt stdio
LIBM_SUBDIR = math
LIBC_SOURCES = $(foreach el,${LIBC_SUBDIR},$(wildcard ${el}/*.c))
LIBM_SOURCES = $(foreach el,${LIBM_SUBDIR},$(wildcard ${el}/*.c))
LIBC_OBJECTS = $(foreach el,${LIBC_SOURCES},$(subst .c,.o,${el}))
LIBM_OBJECTS = $(foreach el,${LIBM_SOURCES},$(subst .c,.o,${el}))

.PHONY: all clean

all: ${LIBC} ${LIBM}
	

clean:
	for dir in ${LIBC_SUBDIR} ${LIBM_SUBDIR};\
	do\
		${MAKE} -C $${dir} $@;\
	done
	${RM} ${RMFLAGS} ${LIBC} ${LIBM}

${LIBC}: ${LIBC_SOURCES} ${HEADERS}
	for dir in ${LIBC_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done
	${AR} rcu $@ ${LIBC_OBJECTS}
	${RANLIB} $@

${LIBM}: ${LIBM_SOURCES} ${HEADERS}
	for dir in ${LIBM_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done
	${AR} rcu $@ ${LIBM_OBJECTS}
	${RANLIB} $@
