#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: a variable number of arguments of different types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int count = 0;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (format[count])
	{
	if (format[count] == 'c')
	{
	c = va_arg(args, int);
	printf("%c", c);
	printf(", ");
	}
	if (format[count] == 'i')
	{
	i = va_arg(args, int);
	printf("%d", i);
	printf(", ");
	}
	if (format[count] == 'f')
	{
	f = va_arg(args, double);
	printf("%f", f);
	printf(", ");
	}
	if (format[count] == 's')
	{
	s = va_arg(args, char*);
	printf("%s", s ? s : "(nil)");
	}
	count++;
	}
	printf("\n");
	va_end(args);
}
