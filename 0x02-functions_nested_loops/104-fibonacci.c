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
	long sum;
	long prev;
	long temp;

	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	printf("%lu, ", prev);
	printf("%lu, ", sum);
	while (k < 97)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 96)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
		k++;
	}

	return (0);
}
