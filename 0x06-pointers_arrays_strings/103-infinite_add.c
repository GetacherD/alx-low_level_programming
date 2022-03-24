#include "main.h"
#include <stdio.h>
/**
 * len -return length of array
 * @s: array pointer
 *
 * Description: return length
 *
 * Return: length
 */
int len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * shift -shift array elements
 * @s: array
 * @j: middle start
 * @end: size of array
 *
 * Description: shift elements
 *
 * Return: pointer  to array
 */
char *shift(char *s, int j, int end)
{
	int i;

	for (i = 0; i < (end - j); i++)
		s[i] = s[j + i];
	while (i <= end)
	{
		s[i] = '\0';
		i++;
	}

	return (s);
}
/**
 * infinite_add -add nums
 * @n1: num1
 * @n2: num2
 * @r: buffer
 * @size_r: size
 *
 * Description: add two nums
 *
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *cp = r;
	int x, y, i, j, have, in1, in2, lmax;

	cp = NULL;
	have = 0;
	j = size_r - 1;
	lmax = len(n2);
	if (len(n1) >= len(n2))
		lmax = len(n1);
	if (lmax > size_r - 1)
	{
		return (cp);
	}
	else
	{
		i = lmax - 1;
		in1 = len(n1) - 1;
		in2 = len(n2) - 1;
		while (i >= 0)
		{
			x = (n1[in1] - '0') % 10;
			y = (n2[in2] - '0') % 10;
			if (in1 < 0)
				x = 0;
			if (in2 < 0)
				y = 0;
			r[j] = (x + have + y) % 10 + '0';
			have = (x + y + have) / 10;
			in1--;
			in2--;
			i--;
			j--;
		}
		if (have > 0)
			r[j] = have + '0';
		if (((lmax > size_r - 2) && (have > 0)))
			return (cp);
		shift(r, j, size_r);
		return (r);
	}
}
