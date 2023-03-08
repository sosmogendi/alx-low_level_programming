#include "main.h"

/**
 * factorial - returns factorial of an integer
 * @n: input
 * Return: -1 (error) or 0 (success)
 */

int factorial(int n)
{
	int x;

	x = n;
	/* Base condition */
	if (x < 0)
		return (-1);
	else if (x == 0)
		return (1);
	else
		return (x * factorial(x - 1));
}
