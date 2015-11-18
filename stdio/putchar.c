#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"mov $0x0E, %%ah\n"
		"int $0x10\n"
		:: "a"(ch), "b"(0x0007)
	);

	return ch;
}
