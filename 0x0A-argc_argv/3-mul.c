#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: args count
 * @argv: array of pointers to the args
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int a, b, result;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
