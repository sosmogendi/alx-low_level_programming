#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width size
 * @height: height size
 * Return: a pointer to the array of ints
 */

int **alloc_grid(int width, int height)
{
	int **x;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		x[h_index] = malloc(sizeof(int) * width);
		if (x[h_index] == NULL)
		{
			for (w_index = 0; w_index < h_index; w_index++)
				free(x[w_index]);
			free(x);
			return (NULL);
		}
		for (w_index = 0; w_index < width; w_index++)
		{
			x[h_index][w_index] = 0;
		}
	}
	return (x);
}
