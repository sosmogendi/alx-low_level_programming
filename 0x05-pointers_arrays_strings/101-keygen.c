#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - enerates random valid passwords
 *
 * Return: passwords
 */


int main(void)
{
	int passwd[100];
	int a, b, c;

	b = 0;
	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		passwd[a] = rand() % 78;
		b += passwd[a] + '0';
		putchar(passwd[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
