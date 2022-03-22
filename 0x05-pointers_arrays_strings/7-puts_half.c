#include "main.h"
/**
 * puts_half -printhalf
 * @str: input str
 *
 * Description: dummy 
 */
void puts_half(char *str)
{
	int len;
	int i,half;
	char *cp = str;
	
	len = 1;
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
		half = (len - 1) / 2;
	}
	for (i = half; i < len; i++)
	{
		_putchar(*(cp + i));
	}
}
	
