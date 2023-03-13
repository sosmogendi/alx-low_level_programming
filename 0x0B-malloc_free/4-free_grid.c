#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer to the first col of first row of the array
 * @height: number of rows in the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
