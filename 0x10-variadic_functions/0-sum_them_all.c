#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns sum of all parameters
 * @n: constant integer
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
