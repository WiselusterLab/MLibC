#include <stdio.h>

int puts(const char *str)
{
	int i = 0;

	while (str[i])
		putchar(str[i++]);
	putchar('\r');
	putchar('\n');

	return i + 2;
}
