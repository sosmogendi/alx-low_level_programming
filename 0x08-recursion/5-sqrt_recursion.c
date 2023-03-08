#include "main.h"

/**
 * sqrt7 - evaluation of 1 to n
 * @y: number that does iteration from 1 to n
 * @n: nth number
 * Return: 0 or -1
 */

int sqrt7(int y, int n)
{
	/* evaluate function */
	if (n == 0 || n == 1)
		return (n);
	else if (y * y < n)
		return (sqrt7(y + 1, n));
	else if (y * y == n)
		/* base condition */
		return (y);
	return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - evaluate sqrt of a number
 * @n: number whose sqrt is computed
 * Return: 0 or -1
 */

int _sqrt_recursion(int n)
{
	int y = 0;
	/* if n is negative */
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		/* recursive call */
		return (sqrt7(y, n));
	}
}
