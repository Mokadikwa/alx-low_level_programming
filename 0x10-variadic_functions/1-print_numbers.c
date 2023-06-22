#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: results
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;
	int p;

	va_start(np, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(np, int);
		printf("%d", p);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	if (separator == NULL)
	{
		return;
	}

	printf("\n");
	va_end(np);
}
