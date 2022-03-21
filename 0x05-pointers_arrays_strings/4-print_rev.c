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

	len = 0;
	while (*s != '\0')
	{
		len++;
	}
	for (i = len - 2; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

