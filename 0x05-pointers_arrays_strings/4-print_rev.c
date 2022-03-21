#include "main.h"
#include <stdio.h>
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
		s++;
	}
	for (i = 0; i <= len + 1; i++)
	{
		_putchar(*(s--));

	}
	_putchar('\n');
}
