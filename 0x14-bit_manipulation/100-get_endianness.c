#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int sys = 1;
	char *endian = (char *)&sys;

	if (*endian == 1)
		return (1);
	else
		return (0);
}
