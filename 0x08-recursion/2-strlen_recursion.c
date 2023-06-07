#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen(s + 1));
}
