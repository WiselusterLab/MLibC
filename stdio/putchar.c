#include <stdio.h>

int putchar(int ch)
{
	__asm__ __volatile__
	(
		"mov $0x09, %%ah\n"
		"int $0x10\n"
		:: "a"(ch), "b"(__video_attributes), "c"(0x0002)
	);
	
	__asm__ __volatile__
	(
		"mov $0x09, %%ah\n"
		"int $0x10\n"
		:: "a"(20), "b"(__video_attributes), "c"(0x0001)
	);

	return ch;
}
