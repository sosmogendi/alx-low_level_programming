#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int k;
	char m;

	for (k = 1; k <= 10; k++)
	{
		for (m = 'a'; m <= 'z'; m++)
			_putchar(m);
		_putchar('\n');
	}
}
