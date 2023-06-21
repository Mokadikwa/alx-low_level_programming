#include <stdio.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * uppercase_print - Entry point
 * @str: string pointer
 *
 * Return: void
 */

void uppercase_print(char *str)
{
	while (*str != '\0')
	{
		putchar(toupper(*str));
		str++;
	}
	putchar('\n');
}
/**
 * lowercase_print - Entr point
 * @str: string pointer
 *
 * Return: void
 */
void lowercase_print(char *str)
{
	while (*str != '\0')
	{
		putchar(tolower(*str));
		str++;
	}
	putchar('\n');
}

/**
 * print_name -  a function that prints a name.
 * @f: function pointer
 * @name: name pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
