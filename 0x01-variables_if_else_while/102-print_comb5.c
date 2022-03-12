#include<stdio.h>
/**
 * main -entry point
 * Description: combination of two digit numbers
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int n;
	int m;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (m = 48; m <= 57; m++)
				{
					if ((m > j) || (n >= i))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(n);
						putchar(m);
					}
					if (((m > j) || (n >= i)) &&
						!((i == 57) && (j == 56) && (n == 57) && (m == 57)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
