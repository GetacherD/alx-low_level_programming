#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -print sum of diagonals
 * @a: array
 * @size: size of array
 *
 * Description: print diagonals of sqaure arr
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumL,sumR;

	sumL = 0;
	sumR = 0;
	for(i = 0; i < size; i++)
	{
		for (j = size -1;j >= 0; j--)
		{
			if (i == j)
			{
				sumL = sumL + a[i][j];
			}
			if( i + j == size - 1)
			{
				sumR = sumR +a[i][j];
			}
		}
	}
	printf("%d, %d\n", sumL,sumR);
}

