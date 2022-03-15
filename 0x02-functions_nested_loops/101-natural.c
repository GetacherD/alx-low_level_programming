#include "main.h"
#include <stdio.h>
/**
 * multiple_35 -multiple of 35
 * Description: dummy
 */
void multiple_35(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
