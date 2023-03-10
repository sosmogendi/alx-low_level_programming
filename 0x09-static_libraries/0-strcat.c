#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: memory location to concat the strings
 * @src: memory location of string to move
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
