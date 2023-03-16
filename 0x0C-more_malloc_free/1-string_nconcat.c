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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *result;

	if (len2 > n)
		result = malloc(sizeof(char) * len1 + n + 1);
	else
		result = malloc(sizeof(char) * len1 + len2 + 1);

	if (result == NULL)
		return (NULL);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';

	return (result);
}
