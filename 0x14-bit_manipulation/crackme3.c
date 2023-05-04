#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char *passwd = "Hol";

	if (argc != 2)
	{
	printf("Usage: %s passwd\n", argv[0]);
	return (1);
	}
	if (strcmp(argv[1], passwd) == 0)
	{
	printf("Congratulations!\n");
	return (0);
	}
	printf("Invalid passwd!\n");
	return (1);
}

