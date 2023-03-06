#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to
 *  memory area dest
 *  @src: where to copy from
 *  @dest: memory area to copy to
 *  @n: bytes to be copied
 *  Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int m = n;

	/* copying "n" bytes of source to target */
	for (; x < m; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
