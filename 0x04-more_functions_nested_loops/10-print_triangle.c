#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: 'size of triangle'
 * Return: results
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
