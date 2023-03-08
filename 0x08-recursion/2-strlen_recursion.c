#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Returns string length
 * @s: pointer to memory area
 * Return: 0
 */


int _strlen_recursion(char *s)
{
	/* Base condition */
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1); /*sum 1 */
}
