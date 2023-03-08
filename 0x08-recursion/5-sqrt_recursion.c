#include "main.h"

/**
 * sqrt7 - enables evaluation of 1 to n
 * @y: number that does iteration from 1 to n
 * @x: nth number
 * @Return: 0 (success) or -1 (error)
 */

int sqrt7(int y, int x)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrt7(y, x + 1));
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: number whose square root is computed
 * @Return: 0 (success) or -1 (error)
 */

int _sqrt_recursion(int n)
{
	return (sqrt7(n, 1));
}
