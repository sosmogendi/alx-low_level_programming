#include "main.h"


/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: function buffer
 * @size_r: buffer size
 * Return: 0
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int z = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp1 = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || z == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp1 = val1 + val2 + z;
		if (temp1 >= 10)
			z = 1;
		else
			z = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp1 % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

