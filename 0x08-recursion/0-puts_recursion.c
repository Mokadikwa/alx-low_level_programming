#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}