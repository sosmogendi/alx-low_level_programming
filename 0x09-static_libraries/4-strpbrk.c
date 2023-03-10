#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s: string checked
 * @accept: string searched
 * Return: bytes of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
