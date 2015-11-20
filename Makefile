AR = ar
ARFLAGS = rcu
RANLIB = ranlib

LIBC = libc.a
LIBM = libm.a
LIBC_SUBDIR = crt stdio
LIBM_SUBDIR = math
LIBC_OBJECTS = $(foreach el,$(foreach el,${LIBC_SUBDIR},$(wildcard ${el}/*.c),$(subst .c,.o,${el}))
LIBM_OBJECTS = $(foreach el,$(foreach el,${LIBM_SUBDIR},$(wildcard ${el}/*.c),$(subst .c,.o,${el}))

.PHONY: all clean

all: ${LIBC} ${LIBM}
	

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
		make -C $${dir};\
	done

${LIBM_OBJECTS}: 
	for dir in ${LIBM_SUBDIR};\
	do\
		make -C $${dir};\
	done
