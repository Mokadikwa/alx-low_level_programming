#include "main.h"
#include <stdio.h>

/**
 * puts_half - Write a function that prints half of a string
 * @str: string
 * Return: results
 */

void puts_half(char *str)
{
	int i;
	int len = 0;
	int n;

	for (i = 0; str[i] != '\0'; len++)
		i++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
