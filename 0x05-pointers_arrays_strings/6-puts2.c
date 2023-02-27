#include "main.h"

/**
 * puts2 - prints every other character
 * starting with the first character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int count = 0;
	int x = 0;
	int y;
	char *z = str;

	while (*z != '\0')
	{
		z++;
		count++;
	}
	x = count - 1;
	for (y = 0, y <= x; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
