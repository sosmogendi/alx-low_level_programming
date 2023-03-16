#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no of elements of an array
 * @size: byte size of each element
 * Return: pointer to an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tbl;

	tbl = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(tbl, 0, nmemb * size);
	return (tbl);
}
