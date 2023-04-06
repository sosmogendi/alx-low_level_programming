#include <stdlib.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:input int
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	x = 1UL << (index);
	return ((n & x) ? 1 : 0);
}
