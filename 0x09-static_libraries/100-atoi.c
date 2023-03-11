#include "main.h"
#include <limits.h>

/**
 * _atoi - converts the initial portion of the
 * string pointed to by s to int
 * @s: pointer to string
 * Return: the converted value
 */

int _atoi(char *s)
{
	/* initialize sign as positive */
	int sign = 1;
	/* initialize index of first digit */
	int i = 0;
	/* initialize base */
	int base = 0;

	/* if whitespace then ignore */
	while (s[i] == ' ')
	{
		i++;
	}
	/* if number is negative or positive, update sign */
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	/* checking for valid input */
	while (s[i] >= '0' &&  s[i] <= '9')
	{
	/* handling overflow test case*/
	if (base > INT_MAX / 10
			|| (base == INT_MAX / 10
				&& s[i] - '0' > 7))
	{
	if (sign == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
	}
	base = 10 * base + (s[i++] - '0');
	}
	return (base * sign);
}
