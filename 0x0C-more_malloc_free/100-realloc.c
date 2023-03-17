#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	/*Allocate memory for the new block*/
	new_ptr = malloc(new_size);

	/*Copy contents of the old block to the new block*/
	if (new_ptr != NULL)
	{
		if (old_size < new_size)
		{
			memcpy(new_ptr, ptr, old_size);
		}
		else
		{
			memcpy(new_ptr, ptr, new_size);
		}
	}
	free(ptr);

	return (new_ptr);
}
