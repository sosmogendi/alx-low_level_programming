#include "main.h"

/**
 * _strlen_recursion - length
 * @s: pointer
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pali - palindrome
 * @s: pointer
 * @a: position to be iterated
 * Return: 0 or 1
 */

int pali(char *s, int a)
{
	if (a < 1)
	{
		return (1);
	}
	if (*s == *(s + a))
	{
		return (pali(s + 1, a - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursively called result
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pali(s, len - 1));
}
