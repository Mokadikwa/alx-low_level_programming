#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: 'number of times the character should be printed'
 * Return: results
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else if
	{
		int i;

		 for (i = 1; i < n; i++)
		 {
			 putchar(' ');
		 }
		 else
		 {
			 int g;

			 if (g == i)
				 putchar('\\');
		}
		 putchar('\n');
	}
}
