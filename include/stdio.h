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

/* BIOS color attributes */
#define BIOS_COLOR(fore, back) ((fore) | ((back) << 8))
#define BIOS_COLOR_ORIGINAL BIOS_COLOR(BIOS_LIGHT_GRAY, BIOS_BLACK)
#define BIOS_BLACK 0x00
#define BIOS_BLUE 0x01
#define BIOS_GREEN 0x02
#define BIOS_CYAN 0x03
#define BIOS_RED 0x04
#define BIOS_MAGNETA 0x05
#define BIOS_BROWN 0x06
#define BIOS_LIGHT_GRAY 0x07
#define BIOS_DARK_GRAY 0x08
#define BIOS_LIGHT_BLUE 0x09
#define BIOS_LIGHT_GREEN 0x0A
#define BIOS_LIGHT_CYAN 0x0B
#define BIOS_LIGHT_RED 0x0C
#define BIOS_LIGHT_MAGNETA 0x0D
#define BIOS_YELLOW 0x0E
#define BIOS_WHITE 0x0F

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
