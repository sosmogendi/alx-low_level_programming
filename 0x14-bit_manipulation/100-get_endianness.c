#include "main.h"

/**
 * get_endianness -  function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 0x01234567;
	unsigned char *s = (unsigned char *) &i;

	if (*s == 0x67)
		return (1);
	else
		return (0);
}
