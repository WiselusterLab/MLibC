#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

/* Standard C I/O functions */
extern int putchar(int ch);
extern int puts(const char *str);

/* Non-standard C I/O functions */
extern void clrscr(void);
extern dword getxy(void);
extern void gotoxy(dword x, dword y);

__END_DECLS

/* Video attribute data */
extern word __video_attributes __MERGE;

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
