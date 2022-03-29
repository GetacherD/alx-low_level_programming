#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int f;

	i = j  = 0;
	printf("haystck empty=%d\n",*haystack == '\0');
	printf("needle empty=%d\n",*needle == '\0');
	if (*haystack == '\0')
		return (haystack);
	if (*needle == '\0')
		return (needle);
	while(haystack[i])
	{
		while (needle[j] && haystack[i + j])
		{
			printf("hay[i+j] =%c\t",haystack[i + j]);
			printf("needle[j] =%c\n",needle[j]);
			if (needle[j] != haystack[i + j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
			return (&haystack[i]);
		i++;
		j = 0;
		f = 1;
	}

	return (NULL);
}
