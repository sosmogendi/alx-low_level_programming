#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: 0
 */


void print_rev(char *s)
{
	int count = 0;
	int a;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (a = count; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
