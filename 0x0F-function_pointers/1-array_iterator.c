#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a paramete
 * @array: array of function
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
