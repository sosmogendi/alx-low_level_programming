#include <stdio.h>
#include "lists.h"

/**
 * __attribute__((constructor))before_main - the function as a constructor
 * before main
 * Return: 0
 */


void __attribute__((constructor)) before_main()
{
printf("You're beat! and yet, you ");
printf("allow,\nI bore my house");
printf("upon my back!\n");
}
