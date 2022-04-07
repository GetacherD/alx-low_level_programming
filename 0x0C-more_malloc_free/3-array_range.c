#include <stdlib.h>
#include "main.h"
/**
 * array_range - create array of integers
 * @min: min value
 * @max: max value
 *
 * Description: function that create array of integers
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	size = max - min + 1;

	if (min > max)
		return (NULL);
	i = 0;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}


