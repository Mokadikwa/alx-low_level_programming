#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char *create_array - creates an array of chars
 * @size: size of the array
 * @c: char value to initialize the array elements
 *
 * Return: pointer to array, or NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
