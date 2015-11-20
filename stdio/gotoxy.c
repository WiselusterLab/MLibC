#include <stdio.h>

void gotoxy(byte x, byte y)
{
	__asm__ __volatile__
	(
		"mov $0x02, %%ah\n"
		"mov %1, %%dh\n"
		"mov %2, %%dl\n"
		"int $0x10\n"
		:: "b"(__mlibc_bios_video_attributes), "m"(x), "m"(y)
	);
}
