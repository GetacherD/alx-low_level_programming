#include "main.h"
#include <stdlib.h>
/**
 * print_num -print integer
 * @n: num to be printed
 *
 * Description: print  number uisng recursion
 */
void print_num(int n)
{
	if (n / 10 == 0 && n % 10 == 0)
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
 * toInt -convert alpha to int
 * @s: char input
 *
 * Description: convert string to num
 *
 * Return: num
 */
int toInt(char s)
{
	if (s >= '0' && s <= '9')
		return (s - '0');
	else
		return (-1);
}
/**
 * main -entry point
 * @argc: number of argumnets
 * @argv: argumnet vector
 *
 * Description: main program
 *
 * Return: 0  always
 */
int main(int argc, char **argv)
{
	int i;

	if (argc < 3)
	{
		prints("Error");

		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	print_num(i);
	_putchar('\n');

	return (0);
}
