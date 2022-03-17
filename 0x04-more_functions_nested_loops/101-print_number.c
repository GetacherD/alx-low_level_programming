#include "main.h"
#include <stdio.h>
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
		x * = cp;
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
