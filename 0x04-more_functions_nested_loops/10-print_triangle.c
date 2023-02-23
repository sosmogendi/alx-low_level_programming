#include <stdio.h>

/**
 * print_triangle - prints a new triangle
 *
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int x = 0, y = size, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < y; count++)
		{
			while (x < y)
			{
				if ((x + count + 1) >= y)
					_putchar('#');
				else
					_putchar(' ');
				x++;
			}
			x = 0;
			_putchar('\n');
		}
	}
}
