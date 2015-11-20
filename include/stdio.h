#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

/* Standard C I/O functions */
extern int putchar(int ch);
extern int puts(const char *str);

/* BIOS based I/O functions */
extern void setvidattr(void);
extern int getvidattr(void);
extern void clrscr(void);
extern int getxy(void);
extern void gotoxy(int x, int y);

__END_DECLS

/* Header for BIOS video macros */
#include <bios.h>

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
