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
	unsigned long int sum;
	unsigned long int prev;
	unsigned long int temp;


	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	printf("%lu, ", prev);
	printf("%lu, ", sum);
	while (k < 96)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 95)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
		k++;
	}

	return (0);
}
