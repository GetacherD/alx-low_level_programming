#include "main.h"
/**
 * rot13 -encode using rot13
 * @s: string to be encoded
 *
 * Description: this function encode string  using rot13 method
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char alph[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char rot[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V','W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'n', 'o','p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	while (s[j] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[j] == alph[i])
			{
				s[j] = rot[i];
				break;
			}
		}
		j++;
	}

	return (s);
}
