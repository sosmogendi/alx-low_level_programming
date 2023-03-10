#include "main.h"

/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: string searched
 * @needle: string to find
 * Return: a pointer to the beginning of the substring
 * or Null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
