#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte c
 * @s: pointer
 * @b: constant byte
 * @n: first bytes of memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
