#include "main.h"
/**
 * _strspn -get length of prefix substring
 * @s: string input
 * @accept: char to find
 *
 * Description: get length of string initail segment
 *
 *  Return: length of initail segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int max;
	unsigned int i;
	unsigned int j;
	unsigned int count;

	max = 0;
	i = 0;
	j = 0;
	count = 0;

	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				break;
			}
			count++;
			j++;
		}
		if (max <= count)
		{
			max = count;
		}
		count = 0;
		i++;
		j = 0;
	}

	return (max + 1);
}

