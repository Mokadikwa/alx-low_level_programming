#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: is a pointer
 * @b: byte to fill n area
 * @n: unknown byte memory area pointed to by s
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
