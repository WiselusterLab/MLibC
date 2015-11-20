#ifndef _MLIBC_CONIO_H_INCLUDED_
#define _MLIBC_CONIO_H_INCLUDED_ 1

#include <bios.h>
#include <stddef.h>

__BEGIN_DECLS

extern void clrscr(void);
extern int getxy(void);
extern void gotoxy(int x, int y);

__END_DECLS

extern int __mlibc_vidattr;

#endif /* _MLIBC_CONIO_H_INCLUDED_ */
