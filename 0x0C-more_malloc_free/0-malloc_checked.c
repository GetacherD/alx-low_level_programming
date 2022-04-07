#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -function that allocate memory
 * @b: size to be allocated
 *
 * Description: allocate memory of size b
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
