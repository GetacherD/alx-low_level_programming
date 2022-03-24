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
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (s[i] != '\0')
	{
		for  (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = j + '0';
				break;
			}

		}
		i++;
	}

	return (cp);
}
