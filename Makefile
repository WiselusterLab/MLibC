AR = ${CROSS_COMPILE}ar
ARFLAGS = rcu
CC = ${CROSS_COMPILE}gcc
CFLAGS = -nostdinc -std=gnu11 -I${INCLUDE} -m16 -O3
CROSS_COMPILE = 
OBJCOPY = ${CROSS_COMPILE}objcopy
RANLIB = ${CROSS_COMPILE}ranlib
RM = rm
RMFLAGS = -rf

INCLUDE = include
HEADERS = $(wildcard include/*.h)
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

${LIBC}: ${HEADERS} ${LIBC_SOURCES}
	for dir in ${LIBC_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done
	${AR} rcu $@ ${LIBC_OBJECTS}
	${RANLIB} $@

${LIBM}: ${HEADERS} ${LIBM_SOURCES}
	for dir in ${LIBM_SUBDIR};\
	do\
		${MAKE} -C $${dir};\
	done
	${AR} rcu $@ ${LIBM_OBJECTS}
	${RANLIB} $@
