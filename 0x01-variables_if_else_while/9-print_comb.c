#include<stdio.h>
/**
 * main -entry point
 * Description: print combination of 0-9
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
			putchar(i);
			putchar(',');
			putchar(j);
			putchar(' ');
		}
	}

	return (0);
}

