#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t position;
	int p_val;

	while (low <= high && value >= array[low] && value <= array[high])
	{
	position = low +
	(((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	p_val = array[position];
	printf("Value checked array[%lu] = [%d]\n", position, p_val);

	if (p_val == value)
		return (position);
	if (p_val < value)
		low = position + 1;
	else
		high = position - 1;
	}
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
