#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: 1st arg
 * @av: pointer to array of args
 * Return: concatenated args
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int size, x = 0, y, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			size++;
		size++;
	}
	size++;
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	s[z] = '\0';
	return (s);
}
