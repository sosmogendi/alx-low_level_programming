#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: pointer to array of args
 * Return: pointer to a string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *new_str = NULL;
	int a = 0, i = ac, j, sum = 0, temp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
		sum += (strlen(av[ac]) + 1);
	new_str = (char *) malloc(sum + 1);

	if (new_str != NULL)
	{
		while (a < i)
		{
			for (j = 0; av[a][j] != '\0'; j++)
				new_str[j + temp] = av[a][j];
			new_str[temp + j] = '\n';
			temp += (j + 1);
			a++;
		}
		new_str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
