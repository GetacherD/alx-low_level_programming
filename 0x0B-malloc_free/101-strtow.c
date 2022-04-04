#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * len_word -retun number of words
 * @str: long string input
 *
 * Description: return number of words separated by space
 *
 * Return: num words
 */
int len_word(char *str)
{
	int i, mainL;

	mainL = i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && i == 0)
		{
			i++;
		}
		else if (str[i] != ' ' && i == 0)
		{
			mainL++;
			i++;
		}
		else if (str[i - 1] == ' ' && str[i] != ' ')
		{
			mainL++;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (mainL);
}
/**
 * getArray -get array
 * @D: output array
 * @str: input
 *
 * Description: return array
 *
 * Return: double ptr
 */
char **getArray(char **D, char *str)
{
	int i, j, k, wc, reset;


	wc = i = j = k = reset = 0;
	while (str[i] != '\0')
	{
		if (((str[i] != ' ' && str[i - 1] == ' ') ||
					(str[i] != ' ' && str[i - 1] != ' ')) && (str[i + 1] != '\0'))
		{
			wc++;
			i++;

		}
		else if ((str[i] == ' ' && str[i - 1] != ' ') ||
				(str[i] != ' ' && str[i + 1] == '\0'))
		{
			wc++;
			D[k] = (char *)malloc(sizeof(char) * (wc + 1));
			if (D[k] == NULL)
			{
				for (reset = 0; reset < k; reset++)
					free(D[reset]);
				free(D);
				return (NULL);
			}
			for (j = wc - 1; j >= 0; j--)
				D[k][j] = str[i - (wc - 1 - j)];
			D[k][wc] = '\0';
			k++;
			wc = 0;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (D);
}

/**
 * strtow -split string
 * @str: string to be splitted
 *
 * Description: split string into words
 *
 * Return: array of array of strings
 */
char **strtow(char *str)
{
	int mainL;
	char **D;

	if (str == NULL || ((str[0] == ' ') && (str[1] == '\0')) || *str == '\0')
		return (NULL);
	mainL = len_word(str);
	D = (char **)malloc(sizeof(char *) * mainL + 2);
	if (D == NULL)
		return (NULL);
	return (getArray(D, str));
}
