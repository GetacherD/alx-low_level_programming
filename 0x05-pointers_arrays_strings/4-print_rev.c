#include "main.h"
/**
 * print_rev -print string in reverse order
 * @s: input string
 *
 * Description: This function printsa any string on reverse order
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
	i = len - 2;
	for (i = len - 2; i > = 0; i--)
	{
		_putchar(s[i]);
	}
	putchar('\n');
}
