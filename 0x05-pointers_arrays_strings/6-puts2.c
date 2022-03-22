#include "main.h"
/**
 * puts2 -print every other
 * @str: input string
 *
 * Description: dummy desc
 */
void puts2(char *str)
{
	int len;
	char *cp = s;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str += 2;
	}
	for (i = 0; i < len - 1; i += 2)
	{
		_putchar(cp[i]);
	}
	_putchar('\n');
}
