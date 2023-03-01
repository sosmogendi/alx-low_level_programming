#include "main.h"


/**
 * string_toupper - changes lowercase lettere to uppercase
 * @n: alphabet
 * Return: 0
 */


char *string_toupper(char *n)
{
	int m;

	m = 0;
	while (n[m] != '\0')
	{
		if (n[m] >= 'a' && n[m] <= 'z')
			n[m] = n[m] - 32;
		m++;
	}
	return (n);
}
