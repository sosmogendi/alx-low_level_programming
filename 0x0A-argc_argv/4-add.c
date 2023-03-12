#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: args count
 * @argv: array of pointers to args
 * Return: 0 if no number is passed to the arg
 * or 1 if it contains args that are not digits
 */

int main(int argc, char **argv)
{
	int sum = 0, a, b;
	/* char *count = NULL */
	char *count;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &count, 10);
		if (*count)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += b;
	}
	printf("%d\n", sum);

	return (0);
}
