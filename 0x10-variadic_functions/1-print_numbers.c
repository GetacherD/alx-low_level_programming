#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -print numbers
 * @separator: separator char
 * @n: number of args
 *
 * Description: print numbers separated by separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;
	if (n <= 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (separator == NULL)
			printf("%d", x);
		else
			printf("%d%s", x, separator);
	}
	va_end(args);
	printf("\n");
}


