#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: 1st param
 * @b: 2nd param
 * Return: 0 or 1
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of a and b
 * @a: 1st param
 * @b: 2nd param
 * Return: 0 or 1
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: 1st param
 * @b: 2nd param
 * Return: 0 or 1
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: 1st param
 * @b: 2nd param
 * Return: 0 or 1
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: 1st param
 * @b: 2nd param
 * Return: 0 or 1
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
