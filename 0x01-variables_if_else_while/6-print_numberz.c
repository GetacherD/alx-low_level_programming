#include<stdio.h>
/**
 * main -entry point
 * Description: print 0 -9 each in new line
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar('\n');
	}

	return (0);
}
