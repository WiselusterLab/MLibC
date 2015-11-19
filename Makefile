SUBDIR = $(shell ls -F | grep /$$)

.PHONY: all clean test

all: 
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done

clean:
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done

test: 
	for dir in ${SUBDIR};\
	do\
		make -C $${dir} $@;\
	done
