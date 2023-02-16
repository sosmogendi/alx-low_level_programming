#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int x;
	long long int y;
	float d;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of long int is: %lu.\n", (unsigned long)sizeof(x));
	printf("The size of long long int is: %lu.\n", (unsigned long)sizeof(y));
	printf("The size of float is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of char is: %lu.\n", (unsigned long)sizeof(c));

	return (0);
}
