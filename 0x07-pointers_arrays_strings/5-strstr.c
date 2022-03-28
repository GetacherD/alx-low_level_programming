#include "main.h"
#include <stdio.h>
/**
 * _strstr -locate substrig
 * @haystack: main sytring
 * @needle: substring
 *
 * Description: locate and return substring
 *
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *cp = haystack;
	int found, i, j;
	char *nu = NULL;

	found = 1;
	i = 0;
	if (*needle == '\0')
		return (cp);

	while (cp[j] != '\0')
	{
		while (needle[i] != '\0')
		{
			if ((cp[j + i] == '\0') || (cp[j + i] != needle[i]))
			{

				found = found * -1;
				break;

			}
			else
			{
				i++;
			}
		}
		if (found == 1)
		{
			return (&cp[j]);
		}
		found = 1;
		i = 0;
		j++;
	}
	if (found == -1)
		return (nu);
	else
		return (nu);
}


