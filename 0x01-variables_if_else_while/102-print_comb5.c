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
	m = 48;
	n = 48;

	for (i = 48; i <= 57; i++)
	{
		m = 48;
		for (j = 48; j <= 57; j++)
		{
			n = 48;
			for (n = 48; n <= 57; n++)
			{
				for (m = 48; m <= 57; m++)
				{
					putchar(i);
					if (j != 57)
					{
						putchar(j);
					}
					putchar(' ');
					putchar(n);
					putchar(m);
					if ((i == 57) && (j == 56) && (n == 57) && (m == 57))
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
