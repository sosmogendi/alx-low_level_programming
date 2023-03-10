#include "main.h"


/**
 * _memset - used to fill a block of memory with a particular value
 * @s: Starting address of memory to be filled
 * @b: value to be filled
 * @n: Number of bytes to be filled starting
 * from s
 * Return: filled value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
}
