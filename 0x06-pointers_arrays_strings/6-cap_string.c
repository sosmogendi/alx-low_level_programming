#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: parameter
 * Return: 0
 */

char *cap_string(char *c)
{
	int x = 0;

	while (c[x])
	{
		while (!(c[x] >= 'a' && c[x] <= 'z'))
			x++;
		if (c[x - 1] == ' ' ||
				c[x - 1] == '\t' ||
				c[x - 1] == '\n' ||
				c[x - 1] == ',' ||
				c[x - 1] == ';' ||
				c[x - 1] == '.' ||
				c[x - 1] == '!' ||
				c[x - 1] == '?' ||
				c[x - 1] == '"' ||
				c[x - 1] == '(' ||
				c[x - 1] == ')' ||
				c[x - 1] == '{' ||
				c[x - 1] == '}' ||
				x == 0)
			c[x] -= 32;
		x++;
	}
	return (x);
}
