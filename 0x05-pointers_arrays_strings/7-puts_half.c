#include "main.h"


/**
 * puts_half - prints second half
 * of a string
 * @str: string
 * Return: half of string
 */


void puts_half(char *str)
{
	int count = 0;

	while (*str != '\n')
	{
		count++;
		str++;
	}
	_putchar('\n');
}
