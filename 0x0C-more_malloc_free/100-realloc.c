#include <stdlib.h>
#include "main.h"
/**
 * _realloc -function that reallocate memory
 * @ptr: pointer to prev memory
 * @old_size: old size of memory
 * @new_size: new size to be allocated
 *
 * Description: function that free prev memory and reallocate new size
 *
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *filler;
	char *ptc;
	int i, j;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0 && ptr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	j = old_size;
	if (new_size < old_size)
		j = new_size;
	ptc = ptr;
	new_ptr = malloc(sizeof(*ptc) * new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	filler = new_ptr;
	for (i = 0; i < j; i++)
		filler[i] = ptc[i];
	free(ptr);

	return (new_ptr);
}
