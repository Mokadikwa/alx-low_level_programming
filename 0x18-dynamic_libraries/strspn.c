#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strspn - Writes a function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		if (strchr(accept, *p) == NULL)
		{
			return (p - s);
		}
		p++;
	}
	return (p - s);
}
