#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: pointer to the byte s that matches that in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
