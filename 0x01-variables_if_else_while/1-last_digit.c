#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main -entry point
 * Description: This program print last digit of a nuber
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last);
	}

	return (0);
}
