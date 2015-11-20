#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

/* Standard C I/O functions */
extern int putchar(int ch);
extern int puts(const char *str);

/* Non-standard C I/O functions */
extern void clrscr(void);
extern word getxy(void);
extern void gotoxy(byte x, byte y);

__END_DECLS

/* BIOS video attribute data */
extern word __mlibc_bios_video_attributes __MERGE;

/* Header for BIOS video macros */
#include <bios.h>

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
