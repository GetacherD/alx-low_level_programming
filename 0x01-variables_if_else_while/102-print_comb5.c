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
			for (n = i; n <= 57; n++)
			{
				for (m = j; m <= 57; m++)
				{
					if (((i == 48) && (j == 48) && (n == 48)
						&& (m == 48)) || ((i == n) && (j == m)))
					{}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(n);
						putchar(m);
					}
					if ((n == 57) && (m == 57) && (i == 57) && (j == 56))
					{}
					else
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
