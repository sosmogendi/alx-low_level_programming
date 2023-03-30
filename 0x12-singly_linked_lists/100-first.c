#include <stdio.h>
#include "lists.h"

/**
 * __attribute__((constructor)) premain_message - the function as a constructor
 * before main
 * Return: 0
 */

void __attribute__ ((constructor)) premain_message(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

