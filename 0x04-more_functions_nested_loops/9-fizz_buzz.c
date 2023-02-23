#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * replacing multiples of 3 and 5
 * with words
 * Return: 0
 */


int main(void)
{
	int i = 1, j = 100;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		putchar(i == j ? '\n' : ' ');
		i++;
	}
	return (0);
}
