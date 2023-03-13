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
	int size, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			size++;
			y++;
		}
		x++;
	}
	size = size + ac + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	return (s);
}
