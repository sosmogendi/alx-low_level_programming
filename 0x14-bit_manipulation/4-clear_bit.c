#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long integer n
 * @index: the index, starting from 0 of the bit you want to set
 * 1 if it worked, or -1 if an error occurred
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = ~(1UL << index); /* i with a 0 at index position */
	*n &= i; /* clear the bit at the index position */

	return (1);
}
