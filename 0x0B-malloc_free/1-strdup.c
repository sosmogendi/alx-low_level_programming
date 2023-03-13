#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter
 * @str: string
 * Return: pointer to memory space
 */

char *_strdup(char *str)
{
	char *s;
	int b = 0, a;

	if (!str)
		return (NULL);
	while (*(str + b))
		b++;
	b++;
	s = malloc(sizeof(char) * b);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= b; a++)
	{
		s[a] = str[a];
	}
	return (s);
}
