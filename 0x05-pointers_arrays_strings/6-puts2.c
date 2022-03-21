#include "main.h"
/**
 * puts2 -print every other
 * @str: input string
 *
 * Description: dummy desc
 */
void puts2(char *str)
{
	while (*str != '\n');
	{
		_putchar(*str);
		str = str + 2;
	}
}
