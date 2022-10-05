#include "search_algos.h"
/**
 * min_index - get minimumn index
 * @array: array to be searched
 * @value: value required
 * @start: random index found first
 * Return: minimum index or first index found
 */
int min_index(int *array, int value, size_t start)
{
	size_t j = start;

	while (array[j] == value)
		j = j - 1;
	return (j + 1);
}
/**
 * _binary_search - search sorted array for a value
 * @array: array to be searched
 * @value: value to be searched
 * @low: start index
 * @high: end index
 * Return: index of value if found else -1
 */
int _advanced_binary(int *array,
		int value, size_t low, size_t high)
{
	size_t i = 0;
	size_t mid;

	if (array == NULL)
		return (-1);
	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i <= high; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
	mid = low + (high - low) / 2;
	if (array[mid] == value)
		return (mid);
	if (low >= high)
		return (-1);
	if (array[mid] < value)
		return (_advanced_binary(array, value, mid + 1, high));
	return (_advanced_binary(array, value, low, mid - 1));
}
/**
 * advanced_binary - search sorted array for a value
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: index of value if found else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int found;

	if (array == NULL)
		return (-1);
	found = _advanced_binary(array, value, 0, size - 1);
	if (found != -1)
		return (min_index(array, value, found));
	return (found);
}
