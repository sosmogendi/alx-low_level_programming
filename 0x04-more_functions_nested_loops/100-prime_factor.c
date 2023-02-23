#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime factor
 * of the number 612852475143
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143;
	int i;

	for (i = (int) sqrt(prime); i > 2; i++)
	{
		if (prime % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
