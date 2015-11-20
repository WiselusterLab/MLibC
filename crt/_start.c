#include <stdio.h>

extern int main(void);

void _start(void)
{
	main();
	__asm__ __volatile__ ("jmp .\n");
}
