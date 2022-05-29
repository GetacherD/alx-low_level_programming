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
	int num;
	if (x < 0)
		num = (-1) * x;
	else
		num = x;
	last = num % 10;
	_putchar(last + '0');

	return (last);
}
