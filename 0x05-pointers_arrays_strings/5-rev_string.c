#include "main.h"
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

	len = 1;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = s - 1;

	char r[len];

	for (i = 0; i < len - 1; i++)
	{
		r[i] = *(s--);

	}
	*s  = r;
}