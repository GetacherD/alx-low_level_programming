#include "main.h"
#include <limits.h>
/**
 * prn -print in recurssion
 * @n: integer
 *
 * Description: print using recursion
 */
void prn(int n)
{
	if (n < 0 || n > INT_MAX)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 == 0)
	{
		_putchar(n % 10 + '0');
	}
	else
	{
		prn(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
 * print_number -print num
 * @n: integer to be printed
 *
 * Description: print using rec
 */
void print_number(int  n)
{
	prn(n);
}
