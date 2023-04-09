#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer input converted to binary
 * Return: binary rep of the int
 */

void print_binary(unsigned long int n)
{
	int i;
	int bits;
	unsigned long int k;

	/* Bits in unsigned long int */
	bits = sizeof(unsigned long int) * 8;

	/* k set to extract most significant bit */
	k = 1UL << (bits - 1);

	/* loop through and print */
	for (i = 0; i < bits - 1; i++)
	{
		if ((n & k) != 0)
		{
			write(1, "1", 1);
		}
		else
		{
			write(1, "0", 1);
		}

	/* shift 1 bit to the right */
	k >>= 1;
	}
}

