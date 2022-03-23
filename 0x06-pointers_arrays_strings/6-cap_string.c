#include "main.h"
/**
 * cap_string -capitalize all words
 * @s: string input
 *
 * Description: this func capitalize all words of a string s
 *
 * Return: capitalized word
 */
char *cap_string(char *s)
{
	char *cp = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s - 32;
		s++;
	}

	return (cp);
}
