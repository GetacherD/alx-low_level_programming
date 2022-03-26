#include "main.h"
/**
 * absval -return absolute value
 * @n: int num
 *
 * Description: return abs value
 *
 * Return: abs(n)
 */
int absval(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
/**
 * prn -print num
 * @n: input num
 *
 * Description: print num
 */
void prn(int n)
{
	if (n / 10 == 0)
	{
		_putchar(absval(n % 10) + '0');
	}
	else
	{
		prn(absval(n / 10));
		_putchar(absval(n % 10) + '0');
	}
}
/**
 * print_number - print int nums
 * @n: input num
 *
 * Description: print num
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		prn(n);
	}
	else
	{
		prn(n);
	}
}
