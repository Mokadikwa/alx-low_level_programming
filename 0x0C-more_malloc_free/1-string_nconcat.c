#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of byes
 *
 * Return: new_str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + n + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++, j++;
	}
	new_str[i] = '\0';

	return (new_str);
}
