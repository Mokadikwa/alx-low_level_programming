#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: values to be added to new array
 * @max: values to be added to new array
 *
 * Return: new_arr
 */

int *array_range(int min, int max)
{
	int i;
	int size, *new_arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	new_arr = malloc(size * sizeof(int));

	if (new_arr == NULL)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
	{
		new_arr[i] = min + i;
	}
	return (new_arr);
}
