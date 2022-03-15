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
	long double sum;
	long double prev;
	long double temp;

	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	printf("%.0Lf, ", prev);
	printf("%.0Lf, ", sum);
	while (k < 96)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 95)
			printf("%.0Lf, ", sum);
		else
			printf("%.0Lf\n", sum);
		k++;
	}

	return (0);
}
