#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - writes a function that concatenates two strings
 * @dest: concatenate src into
 * @src: concatenate to dest
 * @n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
