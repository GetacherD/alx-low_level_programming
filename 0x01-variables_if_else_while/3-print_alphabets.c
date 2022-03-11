#include<stdio.h>
/**
 * main -entry to program
 * Description: Print all alphabets
 *
 * Return: 0 always
 */
int main(void)
{
	int lower;
	int upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
	for (upper = 65; upper <= 90; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
