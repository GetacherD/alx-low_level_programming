#include "main.h"
/**
 *gc -convert asci to num
 *@c: input num
 *Description: print char
 *Return: asci inverse
 */
int gc(int c)
{
	switch (c)
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
		return (58);
	}
}
/**
 * print_ijk -print e num
 * @i: first
 * @j: second
 * @k: third
 *
 * Description: dumy
 */
void print_ijk(int i, int j, int k)
{
	if ((j != 0) && (k < 10))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(gc(k));
	}
	else if ((j != 0) && (k < 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(gc(k / 10));
		_putchar(gc(k % 10));
	}
	else if ((j != 0) && (k >= 100))
	{
		_putchar(',');
		_putchar(' ');
		_putchar(gc(k / 100));
		_putchar(gc((k % 100) / 10));
		_putchar(gc(k % 10));
	}
	else if (j == 0)
	{
		_putchar(gc(k));
	}
	else
	{
	}
}


/**
 * print_times_table -print times table
 * @n: range
 * Description: print times table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (!((n >= 15) || (n <= 0)))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				print_ijk(i, j, k);
			}
			_putchar('\n');
		}
	}
}
