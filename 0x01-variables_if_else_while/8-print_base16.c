#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char b;
	int g;

	b = 'a';
	g = 0;

	while (g < 10)
	{
		putchar(g + '0');
		g++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
