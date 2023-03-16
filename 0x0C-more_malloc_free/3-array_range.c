#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * having all values from min to max
 * and sorted
 * @min: min value
 * @max: max value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *result, i;

	if (min > max)
	{
		return (NULL);
	}

	result = malloc((max - min + 1) * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		result[i] = min + i;
	}

	return (result);
}
