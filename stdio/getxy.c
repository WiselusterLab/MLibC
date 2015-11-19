#include <stdio.h>

dword getxy(void)
{
	dword pos;

	__asm__ __volatile__
	(
		"int $0x10\n"
		: "=d"(pos)
		: "a"(0x0300), "b"(__video_attributes)
	);

	return pos;
}
