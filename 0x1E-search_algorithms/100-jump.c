#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int step, previous, start, i;

	if (array == NULL)
		return (-1);
	step = sqrt((double)size);
	previous = 0;

	while (array[previous] < value)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		previous += step;
		if (previous >= (int)size)
			break;
	}

	start = previous - step;
	printf("Value found between indexes [%d] and [%d]\n", start, previous);
	for (i = start; i <= previous; i++)
	{
		if (i >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
