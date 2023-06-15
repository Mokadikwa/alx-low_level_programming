#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char parameter
 *
 * Return: new_str
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);

	return (new_str);
	free(new_str);
}
