#include "main.h"
/**
 * puts_half -puts hals
 * @str: input
 *
 * Description: put half
 */
void puts_half(char *str)
{
	int i, len, half;
	char *cp = str;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	for (i = half; i < len; i++)
	{
		_putchar(cp[i]);
	}
	_putchar('\n');
}
