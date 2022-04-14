#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_c(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_s(va_list list);
void print_a(va_list list);
/**
 * print_all -print every thing
 * @format: format string
 *
 * Description: print string based on format
 */
void print_all(const char *const format, ...)
{
	char fmt[] = {'c', 'i', 'f', 's', 'a'};
	unsigned int i, j;
	va_list args;
	void (*ptr_print[])(va_list) = {print_c, print_i, print_f, print_s, print_a};
	va_start(args, format);
	i = j = 0;
	while (format[i] != '\0')
	{
		while (format[i] != fmt[j] && j < 4)
			j++;
		ptr_print[j](args);
		if (j != 4 && format[i + 1] != '\0')
			printf(", ");
		j = 0;
		i++;
	}
	printf("\n");
}
/**
 * print_s -print string
 * @list: arg list
 *
 * Description: print str
 */
void print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}
/**
 * print_i -pprint integer
 * @list: arg list
 *
 * Description: print int
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_f -print float
 * @list: arg list
 *
 * Description: print float
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_c -print char
 * @list: arg list
 *
 * Description: print char
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_a -print nothing
 * @list: arg list
 *
 * Description: fail callback
 */
void print_a(va_list __attribute__((unused)) list)
{
}
