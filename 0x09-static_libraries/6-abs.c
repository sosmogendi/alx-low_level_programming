#include "main.h"

/**
 * _abs - computes the absolute value of the integer argument n
 * @n: integer
 * Return: computed integer value
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n > 0)
		n = n;
	return (n);
}
