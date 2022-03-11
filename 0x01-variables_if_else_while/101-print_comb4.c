#include<stdio.h>
/**
 * main -entry point
 * Description: print 3 digit combination
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (((i != j) && (i != k) && (j != k)) && (i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == 55) && (j == 56) && (k == 57))
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
