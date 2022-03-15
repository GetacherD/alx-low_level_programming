#include <stdio.h>
/**
 * main -entry point
 * Description: fibonaci num
 *
 * Return: 0 always
 */
int main(void)
{
	int k;
	int sum;
	int prev;

	sum = 2;
	prev = 1;
	printf("%d, ", prev);
	printf("%d, ", sum);
	while (k < 50)
	{
		sum = sum + prev;
		prev = sum;
		printf("%d, ", sum);
		k++;
	}
	printf("\n");

	return (0);
}
