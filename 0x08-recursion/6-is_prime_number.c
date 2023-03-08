#include "main.h"

/**
 * prime2 - recursion loop
 * @n: integer
 * @base: number to iterate
 * Return: 0 or 1
 */

int prime2(int n, int base)
{
	if (base == n - 1)
	{
		return (1);
	}
	else if (n % base == 0)
	{
		return (0);
	}
	if (n % base != 0)
	{
		return (prime2(n, base + 1));
	}
	return (0);
}

/**
 * is_prime_number - returns 1 if input int is
 * prime number other returns 0
 * @n: input int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int base;

	base = 2;
	/* only greater than 2 */
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime2(n, base));
}
