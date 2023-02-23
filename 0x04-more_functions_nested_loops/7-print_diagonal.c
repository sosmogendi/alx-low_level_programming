#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the diagonal
 * Result: 0
 */


void print_diagonal(int n)
{
	int count = 0, a = 0, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count < n)
		{
			b = count;
			while (a <= b)
			{
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				a++;
			}
			a = 0;
			count++;
		}
	}
}
