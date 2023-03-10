#include "main.h"

/**
 * _puts - writes the string s and a trailing newline to stdout
 * @s: string
 * Return: outputs string s
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
