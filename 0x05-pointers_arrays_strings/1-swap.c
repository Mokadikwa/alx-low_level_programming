#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of a and be
 * @a: value to swap with b
 * @b: value to swap with a
 * Return: results
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
