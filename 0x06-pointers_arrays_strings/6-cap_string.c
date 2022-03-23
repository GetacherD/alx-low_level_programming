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
	int IN;
	int OUT;

	IN = 0;
	OUT = 1;
	while (*s != '\0')
	{
		if (*s == ',' || *s == ';' || *s == '.' || *s == '!' ||
			*s == '?' || *s == '\"' || *s == '(' || *s == ')' ||
			*s == '{' || *s == '}' || *s == '\n' || *s == '\t' || *s == ' ')
		{
			IN = 0;
			OUT = 1;
		}
		else
		{
			IN = 1;
			OUT = 0;
		}
		if (OUT == 1)
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
				*(s + 1) = *(s + 1) - 32;
		}
		s++;
	}

	return (cp);
}
