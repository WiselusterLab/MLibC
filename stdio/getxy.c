#include <stdio.h>

int getxy(void)
{
	int pos;

	__asm__ __volatile__
	(
		"mov $0x03, %%ah\n"
		"int $0x10\n"
		: "=d"(pos)
		: "b"(__mlibc_bios_video_attributes)
	);

	return pos;
}
