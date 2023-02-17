#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers are separated by
 *        a comma followed by a space and in ascending order
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
