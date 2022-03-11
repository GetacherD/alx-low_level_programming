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
				for (m = 49; m <= 57; m++)
				{
					putchar(i);
					if (j != 57)
					{
						putchar(j);
					}
					putchar(n);
					putchar(m);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
