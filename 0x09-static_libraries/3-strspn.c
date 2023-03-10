#include "main.h"

/**
 * _strspn - calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept
 * @s: string
 * @accept:set of bytes searched
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				x++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);

}
