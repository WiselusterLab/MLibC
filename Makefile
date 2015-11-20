AR = ar
ARFLAGS = rcu
CC = gcc
CFLAGS = -nostdinc -std=gnu11 -I$(shell pwd)/include -m16 -O3
OBJCOPY = objcopy
RANLIB = ranlib
RM = rm
RMFLAGS = -rf

LIBC = libc.a
LIBM = libm.a
LIBC_SUBDIR = crt stdio
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

${LIBC}: ${LIBC_OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${LIBM}: ${LIBM_OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${LIBC_OBJECTS}: ${LIBC_SOURCES}
	for dir in ${LIBC_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done

${LIBM_OBJECTS}: ${LIBM_SOURCES}
	for dir in ${LIBM_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done
