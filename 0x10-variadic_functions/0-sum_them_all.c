#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: unsigned integer.
 *
 * Return: result or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	result = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return (result);
}
