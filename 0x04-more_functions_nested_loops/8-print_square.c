#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */


void print_square(int size)
{
	int count = 0, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			while (count < size)
			{
				_putchar('#');
				count++;
			}
			count = 0;
			_putchar('\n');
		}
	}
}
