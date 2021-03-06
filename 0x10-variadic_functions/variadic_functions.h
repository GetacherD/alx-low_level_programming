#ifndef VARF
#define VARF
#include <stdarg.h>
#include <stdio.h>
typedef void (*ptr_print[])(va_list);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
#endif
