#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv != 0)
	{
		printf("%i\n", (argc - 1));
	}
	return (0);
}
