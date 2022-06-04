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
	unsigned long int or = 1;

	or = or << index;
	if (index > 32)
		return (-1);

	n = n & or;
	while (n != 0)
	{
		if ((n >> 1) == 0)
			return (n);
		n = n >> 1;
	}


	return (0);

}

