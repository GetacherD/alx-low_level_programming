#include "main.h"
/**
 * get_bit - get value of bit at index
 * @n: number
 * @index: index of required bit
 *
 * Return: value of bit (0 or 1) or (-1) if error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n != 0)
	{
		if (i == index)
			return ((unsigned int)(n - (n >> 1) * 2));
		n = n >> 1;
		i++;
	}
	return (-1);
}

