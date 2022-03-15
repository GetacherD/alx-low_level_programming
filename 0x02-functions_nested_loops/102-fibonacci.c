#include <stdio.h>
/**
 * main -entry point
 * Description: fibonaci num
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	int j;
	int k;
	int sum;

	i = 1;
	j = 2;
	k = 0;
	while (k < 50)
	{
		sum = i + j;
		i++;
		j++;
		printf("%d, ", sum);
		k++;
	}
	printf("\n");

	return (0);
}
