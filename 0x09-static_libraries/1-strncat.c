#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 * @dest: memory area to append string to
 * @src: memory area to cut string from
 * @n: bytes to be appended
 * Return: pointer to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
