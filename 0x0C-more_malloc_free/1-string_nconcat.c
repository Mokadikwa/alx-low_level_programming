#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1:string to append
 * @s2:string concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: results
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, totallength;
	char *result;

	length1 = strlen(s1);
	totallength = length1 + n;

	result = malloc(sizeof(char) * (totallength + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, length1);
	strncat(result, s2, n);
	result[totallength] = '\0';

	return (result);
}
