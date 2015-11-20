#include <stdio.h>

void gotoxy(int x, int y)
{
	__asm__ __volatile__
	(
		"mov $0x02, %%ah\n"
		"mov %1, %%dh\n"
		"mov %2, %%dl\n"
		"int $0x10\n"
		:: "m"(x), "m"(y)
	);
}
