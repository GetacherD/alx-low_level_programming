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
	printf("%.0LF, ", prev);
	printf("%.0LF, ", sum);
	while (k < 96)
	{
		temp = sum;
		sum = sum + prev;
		prev = temp;
		if (k != 95)
			printf("%.0LF, ", sum);
		else
			printf("%.0LF\n", sum);
		k++;
	}

	return (0);
}
