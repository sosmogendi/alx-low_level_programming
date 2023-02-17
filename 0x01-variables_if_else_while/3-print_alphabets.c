#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char t;
	char u;

	t = 'a';
	u = 'A';

	while (t <= 'z')
	{
		putchar(t);
		t++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
