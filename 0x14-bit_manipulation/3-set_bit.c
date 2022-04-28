#include "main.h"
/**
 * set_bit - set bit at index to 1
 * @n: bit char string
 * @index: index of bit
 *
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long or = 0x01 << index;
	if (n == NULL)
		return (-1);
	*n = (*n) | or;
	return (1);
}
