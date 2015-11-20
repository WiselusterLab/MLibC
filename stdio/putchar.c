#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"push %%ebp\n"
		"lea %4, %%ebp\n"
		"int $0x10\n"
		"pop %%ebp\n"
		:: "a"(0x1301), "b"(__mlibc_bios_video_attributes), "c"(0x0001), "d"(getxy()), "m"((&ch)[1])
	);

	return ch;
}
