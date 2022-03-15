#include <stdio.h>
/**
 * main -entry point
 * Description: fibonaci num
 *
 * Return: 0 always
 */
int main(void)
{
	long int sum;
	long int prev;
	long int temp;
	long int sum_even;

	sum_even = 0;
	sum = 2;
	temp = 1;
	prev = 1;
	while (sum < 4000000)
	{
		temp = sum;
		if ((sum % 2) == 0)
		{
			sum_even += sum;
		}
		sum = sum + prev;
		prev = temp;
	}
	printf("%lu\n", sum_even);

	return (0);
}
