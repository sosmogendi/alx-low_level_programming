#include "main.h"


/**
 * _memcpy - copies n bytes from memory area src to
 *  memory area dest
 *  @src: source memory area
 *  @dest: memory area to copy to
 *  @n: bytes to be copied
 *  Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	/* declare and type casting */
	char *m = (char *)dest;
	char *s = (char *)src;

	/* copying "n" bytes of source to target */
	for (x = 0; x < n; x++)
		m[x] = s[x];
	return (dest);
}
