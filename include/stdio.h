#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

/* Standard C I/O functions */
extern int putchar(int ch);
extern int puts(const char *str);

__END_DECLS

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
