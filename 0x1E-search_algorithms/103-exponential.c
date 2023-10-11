#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	int res;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);
	bound = 1;
	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size) ? bound : size - 1);
	res = binary_search(array, bound / 2, (bound < size) ? bound : size, value);
	return (res);
}
