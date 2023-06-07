#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		putchar(s[n]);
			n++;
	}
	putchar('\n');
}
