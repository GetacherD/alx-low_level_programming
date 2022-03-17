#include "main.h"
#include <stdio.h>
/**
 * asci -convert to asci number
 * @n: input digit
 *
 * Description: convert the digit to its asci code
 *
 * Return: the digits asci code
 */
int asci(int n)
{
	switch (n)
	{
	case 0:
		return (48);
	case 1:
		return (49);
	case 2:
		return (50);
	case 3:
		return (51);
	case 4:
		return (52);
	case 5:
		return (53);
	case 6:
		return (54);
	case 7:
		return (55);
	case 8:
		return (56);
	case 9:
		return (57);
	default:
		return (0);
	}
}
/**
 * power - gives power of x  to y
 * @x: base
 * @y: exponent
 *
 * Description:  calculate x to the power of y
 *
 * Return: x ^ y
 */
int power(int x, int y)
{
	int i;
	int cp;

	cp = x;
	for (i = 1; i < y; i++)
	{
		x *= cp;
	}

	return (x);
}
/**
 * print_number -print any number
 * @n: the number to be printed
 * Description: this function prints any number
 */
void print_number(int n)
{
	int m;
	int i;
	int digits;

	digits = 1;
	m = n;
	while ((n / 10) != 0)
	{
		digits++;
		n = n / 10;
	}
	for (i = digits - 1; i > 0; i--)
	{
		_putchar(asci(m / power(10, i)));
		m %= power(10, i);
	}
	_putchar(asci(m));
}
