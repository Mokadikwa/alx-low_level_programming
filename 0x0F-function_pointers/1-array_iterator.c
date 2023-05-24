#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
