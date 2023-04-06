#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary bits to convert
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int x;

	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
		if (b[x] == '0')
			i = (i << 1) | 0;
		else if (b[x] == '1')
			i = (i << 1) | 1;
		else
			return (0);
	return (i);
}
