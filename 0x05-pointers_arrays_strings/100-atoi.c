#include <stdio.h>
#include <limits.h>

/**
 * asci - Convert asci number to digits.
 * @n: input asci code
 * Return: digits
 */
int asci(int n)
{
	switch (n)
	{
	case 48:
		return (0);
	case 49:
		return (1);
	case 50:
		return (2);
	case 51:
		return (3);
	case 52:
		return (4);
	case 53:
		return (5);
	case 54:
		return (6);
	case 55:
		return (7);
	case 56:
		return (8);
	case 57:
		return (9);
	default:
		return (0);
	}
}
/**
 * power -return x to power of y
 * @x: base
 * @y: exponent
 *
 * Description: raise x to power of y
 *
 * Return: powered num
 */
int power(int x, int y)
{
	int cp, i;

	cp = x;
	if (y == 0)
	{
		return (1);
	}
	else
	{
		for (i = 1; i < y ; i++)
		{
			x = x * cp;
		}
		return (x);
	}
}
/**
 * F -get index of firstoccurance of s
 * @s: string pointer
 *
 * Description: get first num
 *
 * Return: start
 */
int F(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			break;
		}
		i++;
	}

	return (i);
}

/**
 * L -extract last occurance of num in string
 * @s: string input
 *
 * Description: extract first num from string
 *
 * Return: end
 */
int L(char *s)
{
	int i;
	int first;
	int last;

	first = F(s);
	last = first;
	i = 0;
	while (s[last] >= '0' &&  s[last] <= '9')
	{
		last++;
		i++;
	}

	return (last);
}


/**
 * _atoi -extract first occurance of num in string
 * @s: string input
 *
 * Description: extract first num from string
 *
 * Return: int number
 */
int _atoi(char *s)
{
	int fs, ls;
	char *cp = s;
	int num;
	int k, i;
	int sign;

	num = 0;
	i = 0;
	fs = F(s);
	ls = L(s);
	k = ls - fs - 1;
	for (i = fs; i < ls; i++)
	{
		num = num + asci(cp[i]) * power(10, k);
		k--;
	}
	sign = 0;
	i = 0;
	while (i <= fs)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	if (num > INT_MAX)
	{
		return (-1 * sign * num);
	}
	else if(num < INT_MIN)
	{
		return (INT_MIN);
	}
	else
	{
		return (sign * num);
	}
}
