#include <stdio.h>

/**
 * main - sum of all the multiples of 3 and 5 below 1024
 * Return: 0
 */


int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++
	}
	_putchar(b);
	return (0);
}
