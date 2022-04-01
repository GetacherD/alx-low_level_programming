#include "main.h"
#include <stdlib.h>
/**
 * prints -print string
 * @s: string to be printed
 *
 * Description: print string
 */
void prints(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
/**
 * print_num -print numbers
 * @n: number to be printed
 *
 * Description: print integer using recursion
 */
void print_num(int n)
{
	if (n % 10 == 0 && n / 10 == 0)
	{
		return;
	}
	else
	{
		print_num(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
 * main -entry point
 * @argc: number of argumnets
 * @argv: argument vector
 *
 * Description: main program
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	int ch[] = {25, 10, 5, 2, 1};
	int i, n, sum;

	sum = 0;
	if (argc != 2)
	{
		prints("Error");

		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		sum = 0;
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			sum = sum + n / ch[i];
			n = n % ch[i];
		}
	}
	print_num(sum);
	_putchar('\n');

	return (0);
}
