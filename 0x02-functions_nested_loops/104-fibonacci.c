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
	double sum;
	double prev;
	double temp;

	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	printf("%.0f, ", prev);
	printf("%.0f, ", sum);
	while (k < 96)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 95)
			printf("%.0f, ", sum);
		else
			printf("%.0f\n", sum);
		k++;
	}

	return (0);
}
