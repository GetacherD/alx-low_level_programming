#include<stdio.h>
/**
 * main -entry point
 * Description: print number comination -unique
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				if ((i == 56) && (j == 57))
				{	}
				else
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
