#include <stdio.h>

int puts(const char *str)
{
	register int i __asm__ ("%edx") = 0;

	while (str[i])
		putchar(str[i++]);
	putchar('\r');
	putchar('\n');

	return i + 2;
}
