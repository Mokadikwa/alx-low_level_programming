#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: success (pointer to the duplicate string)
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);

	return (new_str);
}
