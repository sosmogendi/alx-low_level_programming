#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int arg
 * @m: another arg
 * Return: Number of bits that would need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j = n ^ m;
	unsigned int size = 0;

	while (j)
	{
		size++;
		j &= (j - 1);
	}
	return (size);
}
