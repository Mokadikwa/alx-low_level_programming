#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: pointer
 *
 * Return: results
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(sizeof(int) * b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
