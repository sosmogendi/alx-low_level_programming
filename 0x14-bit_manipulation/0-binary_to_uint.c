#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the
 * string b that is not 0 or 1
 *
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int x;

	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		sum <<= 1;
		if (b[x] == '1')
			sum += 1;
	}
	return (sum);
}
