#include "main.h"
#include  <stdio.h>
/**
 * isprime -check if a numeber is prime
 * @n: number to be checked
 *
 * Description: check if a numebr is prime -divisible by 1 and itself
 *
 * Return: 1 if prime else 0
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
 * max_prime_factor -gives maximum prime factor of a number
 * @n: maximum prima factor
 *
 * Description: the maximum prime factor of a given number
 *
 * Return: maximum prime factor
 */
long max_prime_factor(long n)
{
	long i;
	long max;

	max = 1;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			/*printf("%lu\n", i);*/
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
 * main -entry point
 * Description: program that prints largest prime factor of a number
 *
 * Return: 0 always
 */
int main(void)
{
	printf("%lu\n", max_prime_factor(612852475143));

	return (0);
}

