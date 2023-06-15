#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: concatenate into char s2
 * @s2: concatenates s1
 *
 * Return: pointer to newly appointed space
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcpy(new_str + len1, s2);

	return (new_str);
}
