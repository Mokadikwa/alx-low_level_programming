#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: 'size of square'
 * Return: results
 */

void print_square(int size)
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
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}

}
