#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that are different between n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor1 = n ^ m;
	unsigned int result = 0;

	while (xor1)
	{
		result += xor1 & 1;
		xor1 >>= 1;
	}
	return (result);
}
