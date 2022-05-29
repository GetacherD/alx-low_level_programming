#include "main.h"
/**
 * print_last_digit  -print last digit of an integer
 * @x: the input number
 *
 * Description: print last digit
 *
 * Return: last digit
 */
int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
		last = (-1) * last;
	_putchar(last + '0');

	return (last);
}
