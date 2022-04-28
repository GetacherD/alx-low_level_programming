#include "main.h"
/**
 * clear_bit -clear bit
 * @n: number
 * @index: index of bit to clear
 *
 * Return: 1 if success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int or = 0x01 << index;

	if (n == NULL)
		return (-1);
	or = ~or;
	*n = (*n) & or;

	return (1);
}
