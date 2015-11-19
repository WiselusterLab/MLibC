#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"int $0x10\n"
		:: "a"(0x006A)
	);
	
	__asm__ __volatile__
	(
		"mov $0x0E, %%ah\n"
		"int $0x10\n"
		:: "a"(ch), "b"(__video_attributes)
	);

	return ch;
}
