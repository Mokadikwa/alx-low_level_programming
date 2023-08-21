#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: sub-string
 * Return: results
 */

char *_strstr(char *haystack, char *needle)
{
	int n, m;

	for (n = 0; haystack[n] != '\0'; n++)
	{
		for (m = 0; needle[m]; m++)
		{
			if (haystack[n + m] != needle[m])
				break;
		}
		if (needle[m] == '\0')
			return (haystack + n);
	}
	return (NULL);
}
