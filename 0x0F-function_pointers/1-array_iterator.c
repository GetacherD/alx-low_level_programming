#include "function_pointers.h"
/**
 * array_iterator -function that takes function
 * @array: function pointer array
 * @size: size of array
 * @action: function call back function
 *
 * Description: function that takes a call back func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (size < i)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}