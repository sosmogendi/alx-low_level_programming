#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a
 * parameter on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to the array to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	for (; x < size; x++)
	{
		(*action)(array[x]);
	}
}
