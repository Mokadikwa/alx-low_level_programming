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
	int *left = a;
	int *right = a + n - 1;
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
