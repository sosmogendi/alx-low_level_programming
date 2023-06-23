#include "main.h"

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: Pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
