#include "main.h"

/**
 * *_strcpy - copies string pointed to by src
 * to the dest
 * @src: source
 * @dest: destination
 * Return: pointer to the dest
 */


char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for (; n < m; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
