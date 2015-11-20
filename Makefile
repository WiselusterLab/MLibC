AR = ar
ARFLAGS = rcu
RANLIB = ranlib

LIBC = libc.a
LIBM = libm.a
LIBC_SUBDIR = stdio
LIBM_SUBDIR = math

.PHONY: all clean objects

all: objects
	

clean:
	for dir in ${LIBC_SUBDIR} ${LIBM_SUBDIR};\
	do\
		make -C $${dir} $@;\
	done

${LIBC}: ${LIBC_OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${LIBM}: ${LIBM_OBJECTS}
	${AR} rcu $@ $^
	${RANLIB} $@

${LIBC_OBJECTS}: 
	for dir in ${LIBC_SUBDIR};\
	do\
		make -C $${dir} all;\
	done

${LIBM_OBJECTS}: 
	for dir in ${LIBM_SUBDIR};\
	do\
		make -C $${dir} all;\
	done
