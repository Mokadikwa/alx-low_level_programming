#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: unsigned int
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pt;
	 unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(pt, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(pt, int);
	}
	va_end(pt);

	return (sum);
}
