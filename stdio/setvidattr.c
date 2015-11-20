#include <stdio.h>

void setvidattr(int attr)
{
	__asm__ __volatile__
	(
		"mov %0, %%ebx\n"
		:: "m"(attr)
	);
}
