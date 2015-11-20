#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"push %%ebp\n"
		"lea %3, %%ebp\n"
		"int $0x10\n"
		"pop %%ebp\n"
		:: "a"(0x1301), "c"(0x0001), "d"(getxy()), "m"((&ch)[1])
	);

	return ch;
}
