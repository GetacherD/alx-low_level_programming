#include "main.h"
#include<stdio.h>
int main(void)
{
	int i;
	int j;

	i = print_last_digit(889);
	j = print_last_digit(0);
	printf("%d\n", i);
	printf("%d\n",j);

	return 0;
}
