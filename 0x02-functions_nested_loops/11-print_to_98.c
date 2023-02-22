#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers n to 98
 *
 * @n: parameter
 *
 * Return: integers
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
