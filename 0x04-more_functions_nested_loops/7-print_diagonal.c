#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: 'number of times the character should be printed'
 * Return: results
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
}

