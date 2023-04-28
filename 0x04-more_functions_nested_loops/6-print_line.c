#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line
 * @n: 'number of times the character _ should be printed'
 * Return: results
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else if
		(n > 0)
		{
			int i = 0;
			if (i <= n)
				i++;
			{
				putchar('_');
			}
			putchar('\n');
		}
}
