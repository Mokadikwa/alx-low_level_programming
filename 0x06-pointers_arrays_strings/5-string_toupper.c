#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: upper case string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return (str);
}

