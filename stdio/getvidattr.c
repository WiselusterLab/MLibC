#include <stdio.h>

int getvidattr(void)
{
	int attr;

	__asm__ __volatile__
	(
		""
		: "=b"(attr)
	);
	
	return attr;
}
