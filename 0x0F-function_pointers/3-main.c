#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*k)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	k = get_op_func(argv[2]);

	if (!k)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", k(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

