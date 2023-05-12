#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Write a function that compares two strings
 * @s1: copy s2 into
 * @s2: copy to s2
 * Return: s1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
