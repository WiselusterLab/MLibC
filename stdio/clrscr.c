#include <stdio.h>

void clrscr(void)
{
	__asm__ __volatile__
	(
		"xchg %%bl, %%bh\n"
		"int $0x10\n"
		:: "a"(0x0600), "b"(__mlibc_vidattr), "c"(0x0000), "d"(0x1950)
	);

	gotoxy(0, 0);
}
