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
	long int sum;
	long int prev;
	long int temp;
	long int sum_even;

	sum_even = 0;
	k = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	while (k < 48)
	{
		temp = sum;
		sum = sum + prev;
		if (sum <= 400000000)
		{
			if ((sum % 2) == 0)
			{
				sum_even += sum;
			}
		}
		prev = temp;
		k++;
	}
	printf("%lu\n", sum_even);

	return (0);
}
