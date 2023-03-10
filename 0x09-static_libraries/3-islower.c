#include "main.h"

/**
 * _islower - checks for a lower-case character
 * @c: character checked
 * Return: nonzero if the character c falls into the tested class,
 * and a zero value if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
