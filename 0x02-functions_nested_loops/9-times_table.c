#include "main.h"
/**
 * times_table -print times table
 * Description: print times table
 */
void times_table(void)
{
	int i;
	int j;
	int k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k=i*j;
			if (k >= 10)
			{
				_putchar(gc(k / 10));
				_putchar(gc(k % 10));
				_putchar(' ');
			}
			else
			{
				_putchar(gc(k));
				_putchar(' ');
				_putchar(' ');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
