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
	unsigned int length1;
	unsigned int length2;
	unsigned int i = 0, j = 0;
	char *result;

	length1 = 0;
	length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		result = malloc(sizeof(char) * (length1 + n + 1));
	else
		result = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!result)
		return (NULL);

	while (i < length1)
	{
		result[i] = s1[i];
		i++;
	}
	while (n < length2 && i < (length1 + n))
		result[i++] = s2[j++];

	while (n >= length2 && i < (length1 + length2))
		result[i++] = s2[j++];

	result[i] = '\0';

	return (result);
}
