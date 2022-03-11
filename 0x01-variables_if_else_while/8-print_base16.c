#include<stdio.h>
/**
 * main -entry point
 * Description: all nuber of base 16
 *
 * Return: 0 always
 */
int main(void)
{
	int lower;

	for (lower = 48; lower <= 102; lower++)
	{
		if ((lower < 58) || (lower >= 97))
		{

			putchar(lower);
		}

	}
	putchar('\n');

	return (0);
}

