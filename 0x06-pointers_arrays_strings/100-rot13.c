#include "main.h"


/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: 0
 */


char *rot13(char *s)
{
	int x;
	int y;

	char orig[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == orig[y])
			{
				s[x] = rot[y];
				break;
			}
		}
	}
	return (s);
}
