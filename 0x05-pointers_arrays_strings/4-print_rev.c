#include "main.h"
#include <stdio.h>
/**
 * rev_string -print string in reverse
 * @s: input string
 *
 * Description: prints string in reverse order
 */
void rev_string(char *s)
{
	int len;
	int i;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = 0; i <= len; i++)
	{
		_putchar(*(s--));

	}
}
