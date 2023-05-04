#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string
 * @n: number of elements
 * Return: results
 */

void reverse_array(int *a, int n)
{
	int l;
	int m;

	for (l = 0; l < n--; l++)
	{
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
