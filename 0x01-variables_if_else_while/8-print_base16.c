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

	for (lower = 48; lower <= 70; lower++)
	{
		if ((lower < 58) || (lower >= 65))
		{

			putchar(lower);
			putchar('\n');
		}

	}

	return (0);
}

