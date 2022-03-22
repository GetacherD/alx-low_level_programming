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
	int i;
	
	len = 1;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
}
