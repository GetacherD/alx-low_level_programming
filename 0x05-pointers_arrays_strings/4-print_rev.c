#include "main.h"
/**
 * print_rev -print string in reverse
 * @s: input string
 *
 * Description: prints string in reverse order
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 1;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - 2;
	for (i = 0; i < len; i++)
	{
		_putchar(*(s--));

	}
	putchar('\0');
	_putchar('\n');
}
