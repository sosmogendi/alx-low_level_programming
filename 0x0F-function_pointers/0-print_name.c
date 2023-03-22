#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: pointer to funtion
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
