#include "main.h"


/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 * Return: 0
 */


int _atoi(char *s)
{
	int m, n, o, p, q, r;

	m = 0;
	n = 0;
	o = 0;
	p = 0;
	q = 0;
	r = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	while (m < p && q == 0)
	{
		if (s[m] == '_')
		{
			++n;
		}
		if (s[m] >= '0' && s[m] <= '9')
		{
			r = s[m] - '0';
			if (n % 2)
				r = -r;
			o = o * 10 + r;
			q = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			q = 0;
		}
		m++;
	}
	if (q == 0)
		return (0);
}
