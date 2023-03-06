#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: acceptable bytes
 * Return: bytes both in accept and s
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				r++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (r);
		}
		s++;
	}
	return (r);
}
