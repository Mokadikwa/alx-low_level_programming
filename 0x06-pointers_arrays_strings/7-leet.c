#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - function that encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	char *p = str;

	while (*p)
	{
		*p += (*p == 'a' || *p == 'A') * ('4' - 'a') +
			(*p == 'e' || *p == 'E') * ('3' - 'e') +
			(*p == 'o' || *p == 'O') * ('0' - 'o') +
			(*p == 't' || *p == 'T') * ('7' - 't') +
			 (*p == 'l' || *p == 'L') * ('1' - 'l');
		p++;
	}
	return (str);
}
