#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: second string
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			a[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			a[i] = s2[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';

	return (a);
}
