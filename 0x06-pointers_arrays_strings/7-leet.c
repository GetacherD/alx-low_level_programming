#include <stdio.h>
#include "main.h"
/**
 * leet -encode to 1337
 * @s: string input
 *
 * Description: encode string in to 1337
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *cp = s;
	int i, j;
	char leet[] ={'0','l','?','e','a','?','?','t'};
	
	i = 0;
	while (s[i] != '\0')
	{ 
		j = 0;
		while (j < 8)
		{
			if(s[i] == leet[j])
			{
				s[i] = j;
				break;
			}
			j++;
		}
		i++;
	}

	return (cp);
}
