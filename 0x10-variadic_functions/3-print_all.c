#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_s(va_list list);
void print_i(va_list list);
void print_f(va_list list);
void print_c(va_list list);
void print_all(const char *const format, ...);
/**
 * print_all -print every thing
 * @format: format string
 *
 * Description: print string based on format
 */
void print_all(const char *const format, ...)
{
	char fmt[] = {'c', 'i', 'f', 's'};
	unsigned int i, j;
	va_list args;
	char *sep = "";
	ptr_print ptr = {print_c, print_i, print_f, print_s};

	va_start(args, format);
	i = j = 0;
	while (format[i] != '\0')
	{
		while (j < 4 && (format[i] != fmt[j]))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			ptr[j](args);
			sep = ", ";
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(args);
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
	int i;

	i = va_arg(list, int);
	printf("%d", i);
}
/**
 * print_f -print float
 * @list: arg list
 *
 * Description: print float
 */
void print_f(va_list list)
{
	float f;

	f = va_arg(list, double);
	printf("%f", f);
}
/**
 * print_c -print char
 * @list: arg list
 *
 * Description: print char
 */
void print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	printf("%c", ch);
}

