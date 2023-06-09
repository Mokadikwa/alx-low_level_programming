#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: string to compare to s2
 * @s2: string to compare s1
 *
 * Return:  returns 1 if striings are identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}

		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 != '\0' && *s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
