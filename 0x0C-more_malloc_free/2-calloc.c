#include <stdlib.h>
#include "main.h"
/**
 * _calloc -function allocate memory for array
 * @nmemb: row of array
 * @size: columns of array
 *
 * Description: function that allocate memory for array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	return (mem);
}

