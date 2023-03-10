#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (0);
}
