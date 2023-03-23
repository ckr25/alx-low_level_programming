#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of its parameters
 * @n: The number of parameters passed
 * @...: a variable of parameters to calculate sum of
 * Return: if n == 0 - 0.
 * 	   Otherwise  - the sum of all parameters
 * 	   /
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);

	return (sum);
}
