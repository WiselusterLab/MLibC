#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"int $0x10\n"
		:: "a"(0x1301), "b"(__video_attributes), "c"(0x0001), "d"(getxy()), "B"(&ch)
	);

	return ch;
}
