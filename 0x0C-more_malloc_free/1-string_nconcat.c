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
	/*unsigned int len = (n < len2) ? n : len2;  Maximum length to copy from s2*/
	char *result;

	/* Handle null inputs as empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Use the entire s2 if n is greater than or equal to its length*/
	if (n >= len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1); /* Allocate memory for result*/

	if (result == NULL)
	{
		return (NULL);
	}

	/* Copy s1 into result*/
	memcpy(result, s1, len1);

	/* Copy at most n characters from s2 into result*/
	memcpy(result + len1, s2, n);

	/* Add null terminator to result*/
	result[len1 + n] = '\0';

	return (result);
}
