#include "main.h"
/**
 * rev_string -print string in reverse
 * @s: input string
 *
 * Description: prints string in reverse order
 */
void rev_string(char *s)
{
	int length;
	int i, j;
	char tmp;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	j = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}

}
