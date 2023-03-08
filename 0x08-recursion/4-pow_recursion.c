#include "main.h"

/**
 * _pow_recursion - returns value of x**y (power)
 * @x: first integer
 * @y: second integer
 * Return: 0 (success) or -1 (error)
 */

int _pow_recursion(int x, int y)
{
	/* Base condition */
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		/* Recursive call */
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);

}
