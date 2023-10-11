#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array
 * @low: The starting index in the array
 * @high: The ending index in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;
	int mid_value;
	size_t i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		mid_value = array[mid];

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (mid_value == value)
			return (mid);
		if (mid_value < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
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
	return (binary_search(array, bound / 2, (bound < size) ? bound : size - 1, value));
}
