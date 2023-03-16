#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer to a newly allocated space in memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c, c1;
	int sign = n;
	char *result;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (sign >= len2)
	{
		sign = len2;
		result = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (c = 0; c < len1; c++)
	{
		result[c] = s1[c];
	}
	for (c1 = 0; c1 < sign; c1++)
	{
		result[c++] = s2[c1];
	}
	result[c++] = '\0';
	return (result);
}
