#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - return palindrome
 * @s: string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
