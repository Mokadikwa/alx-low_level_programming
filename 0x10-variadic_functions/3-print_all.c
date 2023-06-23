#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: results
 */

void print_all(const char * const format, ...)
{
	const char *sep = "";
	const char *fmt = format;
	va_list args;

	va_start(args, format);

	while (*fmt)
	{
		switch (*fmt)
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
				}
				break;
			default:
				fmt++;
				continue;
		}
		sep = ", ";
		fmt++;
	}
	printf("\n");
	va_end(args);
}
