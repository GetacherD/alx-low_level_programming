#include <stdio.h>
/**
 * _putchar -print string
 * Description: print string
 */
void _putchar(char s)
{
	putchar(s);
}
void print_alphabet_x10(void)
{
	int i;

	for (i = 97;i <= 122;i++)
	{
		putchar(i);
	}
	putchar('\n');
}
