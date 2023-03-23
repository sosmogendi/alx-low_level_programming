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
	int i = 0;
	char c;
	char *s;
	float f;

	va_start(args, format);
	while (format[i] != '\0')
	{
	if (format[i] == 'c')
	{
	c = (char)va_arg(args, int);
	printf("%c", c);
	}
	else if (format[i] == 'i')
	{
	i = va_arg(args, int);
	printf("%d", i);
	}
	else if (format[i] == 'f')
	{
	f = (float)va_arg(args, double);
	printf("%f", f);
	}
	else if (format[i] == 's')
	{
	s = va_arg(args, char*);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
	printf("%s", s);
	}
	}
	i++;
	}
	printf("\n");
	va_end(args);
}

