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
int isprime(int n)
{
	int i;
	int count;
	
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
 * main -entry point
 * Description: program that prints largest prime factor of a number
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 612852475143; i++)
	{

