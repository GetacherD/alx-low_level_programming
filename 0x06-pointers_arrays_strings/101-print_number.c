#include "main.h"
/**
 * power - return x to power of y
 * @x: base
 * @y: exponent
 * Description: power x to y
 *
 * Return: x to power of y
 */
int power(int x, int y)
{
	int cp, i;

	cp = x;
	i = 1;
	if (y <= 0)
	{
		x = 1;
	}
	else if (y > 0)
	{
		while (i < y)
		{
			x = x * cp;
			i++;
		}
	}

	return (x);
}
/**
 * print_number -print numbers
 * @n: input number
 *
 * Description: prints a number
 */
void print_number(int n)
{
	int digits;
	int cp;
	int i, sign;

	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	cp = n;
	digits = 1;
	while (n / 10 != 0)
	{
		digits++;
		n = n / 10;
	}
	if (sign < 0)
	{
		putchar('-');
	}
	for (i = digits - 1; i >= 0; i--)
	{
		putchar((cp / power(10, i)) + '0');
		cp = cp % power(10, i);
	}
}
