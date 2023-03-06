#include "main.h"
#include <string.h>

/**
 * _strchr - searches string for the first occurrence of c
 * @s: pointer to the first occurence
 * @c: character being pointed
 * Return: pointer to the first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; )
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
