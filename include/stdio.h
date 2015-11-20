#ifndef _MLIBC_STDIO_H_INCLUDED_
#define _MLIBC_STDIO_H_INCLUDED_ 1

#include <stddef.h>

__BEGIN_DECLS

/* Standard C I/O functions */
extern int putchar(int ch);
extern int puts(const char *str);

/* Non-standard C I/O functions */
extern void clrscr(void);
extern int getxy(void);
extern void gotoxy(int x, int y);

__END_DECLS

/* Video attribute data */
extern int __video_attributes __MERGE;

/* Video attribute constants */
#define BIOS_VIDEO_ATTRIBUTES(page, color) (((page) << 0x08) | (color))
#define BIOS_PAGE_CURRENT 0x00 
#define BIOS_COLOR(fore, back) ((fore) | ((back) << 0x04))
#define BIOS_COLOR_ORIGINAL BIOS_COLOR(BIOS_COLOR_LIGHT_GRAY, BIOS_COLOR_BLACK)
#define BIOS_COLOR_BLACK 0x00
#define BIOS_COLOR_BLUE 0x01
#define BIOS_COLOR_GREEN 0x02
#define BIOS_COLOR_CYAN 0x03
#define BIOS_COLOR_RED 0x04
#define BIOS_COLOR_MAGNETA 0x05
#define BIOS_COLOR_BROWN 0x06
#define BIOS_COLOR_LIGHT_GRAY 0x07
#define BIOS_COLOR_DARK_GRAY 0x08
#define BIOS_COLOR_LIGHT_BLUE 0x09
#define BIOS_COLOR_LIGHT_GREEN 0x0A
#define BIOS_COLOR_LIGHT_CYAN 0x0B
#define BIOS_COLOR_LIGHT_RED 0x0C
#define BIOS_COLOR_LIGHT_MAGNETA 0x0D
#define BIOS_COLOR_YELLOW 0x0E
#define BIOS_COLOR_WHITE 0x0F

#endif /* _MLIBC_STDIO_H_INCLUDED_ */
