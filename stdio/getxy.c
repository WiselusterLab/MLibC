#include <stdio.h>

dword getxy(void)
{
	dword pos;

	__asm__ __volatile__
	(
		"mov $0x03, %%ah\n"
		"int $0x10\n"
		: "=d"(pos)
		: "b"(__video_attributes)
	);

	return pos;
}
