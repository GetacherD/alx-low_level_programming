#include "main.h"
#include <stdio.h>
/**
 * isprime -d
 * @n: par
 *
 * Description: du
 *
 * Return: 1
 */
int isprime(long n)
{
	long i;
	long count;

	count = 0;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count > 2)
		return (0);
	else
		return (1);
}
/**
 * max_prime_factor -fac
 * @n: in
 *
 * Description: dum
 *
 * Return: 1
 */
long max_prime_factor(long n)
{
	long i;
	long max;

	max = 1;
	for (i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			if (isprime(i) == 1)
			{
				if (max < i)
				{
					max = i;
				}
			}
		}
	}

	return (max);
}
/**
 * main -entry
 * Description: dse
 *
 * Return: 0 always
 */
int main(void)
{
	printf("%lu\n", max_prime_factor(612852475143));

	return (0);
}

