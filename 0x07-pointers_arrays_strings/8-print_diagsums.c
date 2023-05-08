#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @size: size of array
 * @a: pointer
 * Return: results
 */

void print_diagsums(int *a, int size)
{
	int n1 = 0, n2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				n1 += *(a + i * size + j);
			if (i == size - j - 1)
				n2 += *(a + i * size + (size - j - 1));
		}
	}
	printf("%d, %d\n", n1, n2);
}
