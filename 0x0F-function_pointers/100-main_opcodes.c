#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of the args
 * @argv: array of pointers of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;
	unsigned char *main_ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* cast main function pointer to unsigned char pointer */
	main_ptr = (unsigned char *)main;

	/* print the opcodes in hexadecimal format */
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("\n");
	return (0);
}
