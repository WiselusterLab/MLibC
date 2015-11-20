extern int main(void);

void _start(void)
{
	main();
	while (1)
		__asm__ __volatile__ ("hlt\n");
}
