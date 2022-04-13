#include "function_pointers.h"
/*
 * array_iterator -function that takes function
 * @array: function pointer array
 * @size_t: size of array
 * @action: function call back function
 *
 * Description: function that takes a call back func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	
	for (i = 0; i < size / sizeof(array[0]); i++)
	{
		action(array[i]);
	}
}
