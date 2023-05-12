#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - 'check for lowercase character'
 * @c: The value to test whether it is a lowercase letter
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
