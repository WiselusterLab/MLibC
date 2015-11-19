#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

extern int putchar(int ch);
extern int puts(const char *str);
extern void clrscr(void);
extern void gotoxy(int x, int y);

__END_DECLS

extern word __video_attributes __attribute__((section(".text")));

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
