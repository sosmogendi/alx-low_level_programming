#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_valid_number - checks for a valid number
 * @num: input to check
 * Return: 0 or 1
 */

int is_valid_number(char *num)
{
	int i, len1 = strlen(num);

	for (i = 0; i < len1; i++)
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: result
 */

int multiply(char *num1, char *num2)
{
	return (atoi(num1) * atoi(num2));
}

/**
 * main - entry point
 * @argc: number of inputs
 * @argv: pointwr to array
 * Return: result of multiplication
 */

int main(int argc, char **argv)
{
	char *num1, *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
