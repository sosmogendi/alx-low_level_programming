#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *password = "Hol";

    if (argc != 2)
    {
        printf("Usage: %s password\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], password) == 0)
    {
        printf("Congratulations!\n");
        return 0;
    }

    printf("Invalid password!\n");
    return 1;
}
