#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts -  prints a string
 * @str: string value
 * Return: results
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

