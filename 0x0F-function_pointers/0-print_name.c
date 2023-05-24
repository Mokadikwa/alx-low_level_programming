#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 * @name: to be printed
 * @f: pointer to function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
