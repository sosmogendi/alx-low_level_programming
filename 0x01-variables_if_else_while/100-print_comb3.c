#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers are separated by
 *        a comma followed by a space and in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');

	return (0);
}
