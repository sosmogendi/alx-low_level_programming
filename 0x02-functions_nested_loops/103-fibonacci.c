#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */


int main(void)
{
	int i = 0;
	long j = 1, y = 2, total = y;

	while (y + j < 40000000)
	{
		y += j;
		if (y % 2 == 0)
			total += y;
		j = y - j;
		++i;
	}
	printf("%ld\n", total);
	return (0);
}
