#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: 'size of triangle'
 * Return: results
 */

void print_triangle(int size)
{

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
					putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}

}
