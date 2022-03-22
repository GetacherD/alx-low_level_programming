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
	char *cp = s;

	length = 0;
	while (*cp != '\0')
	{
		length++;
		cp++;
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
