#include<stdio.h>
/**
 * _putchar -print string to screen
 * Description: print string to scren
 */
void _putchar(char str[])
{
	int i;
	
	for (i = 0; i < (int)sizeof(str)/(int)sizeof(str[0]);i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
/**
 * main -entry point
 * Description: print string
 *
 * Return: 0 always
 */
int main(void)
{
	_putchar("_putchar");

	return (0);
}
	
