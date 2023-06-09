#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - writes a function that concatenates two strings
 * @dest: concatenates into
 * @src: concatenates from
 * Return: results
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
