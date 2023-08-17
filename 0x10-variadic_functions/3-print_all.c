#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	int n;
	float f;
	char *s;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_args(args, int), printf("%c", c);
				break;
			case 'i':
				n = va_args(args, int), printf("%d", n);
				break;
			case 'f':
				f = (float) va_args(args, double), printf("%f", f);
				break;
			case 's':
				s = va_args(args, char *), printf("%s", s != NULL ? : "(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
		{
			char *sep = ", ";
			printf("%s", sep);
		}
		i++;

	}
	va_end(args), printf("\n");
}

