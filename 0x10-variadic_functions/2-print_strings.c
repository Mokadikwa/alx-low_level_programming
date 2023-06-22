#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: results
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mp;
	unsigned int m;
	char *op;

	va_start(mp, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (m = 0; m < n; m++)
	{
		op = va_arg(mp, char *);

		if (op == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", op);
		}
		if (m != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mp);
}
