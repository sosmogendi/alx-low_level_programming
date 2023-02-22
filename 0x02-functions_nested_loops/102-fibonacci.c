#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 ints and long
 */

int main(void)
{
	int i = 0;
	long j = 1, x = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", x);
		else
		{
			x += j;
			j = x - j;
			printf(", %ld", x);
		}
		i++;
	}
	printf("\n");
	return (0);
}
