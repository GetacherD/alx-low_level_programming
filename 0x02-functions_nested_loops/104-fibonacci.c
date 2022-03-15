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
	unsigned long long sum;
	unsigned long long prev;
	unsigned long long temp;

	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	printf("%llu, ", prev);
	printf("%llu, ", sum);
	while (k < 98)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 97)
			printf("%llu, ", sum);
		else
			printf("%llu\n", sum);
		k++;
	}

	return (0);
}
