#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat -concat strings
 * @s1: first string
 * @s2: second string
 * @n: number of char to concat
 *
 * Description: concatenate two strings take n from s2
 *
 * Return: pointer to concatenated str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	char null[] = "";
	unsigned int len1, len2, i, j;

	i = j = len1 = len2 = 0;
	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 = null;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}
	if (n >= len2)
		n = len2;

	con = malloc(sizeof(char) * (len1 + n + 1));
	if (con == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		con[i + j] = s2[j];
		j++;
	}
	con[i + j] = '\0';

	return (con);
}
