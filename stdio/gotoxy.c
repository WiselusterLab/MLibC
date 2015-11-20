#include <stdio.h>

void gotoxy(int x, int y)
{
	__asm__ __volatile__
	(
		"mov $0x02, %%ah\n"
		"mov %0, %%dh\n"
		"mov %1, %%dl\n"
		"int $0x10\n"
		:: "b"(__mlibc_vidattr), "m"(x), "m"(y)
	);
}
