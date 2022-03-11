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

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}

