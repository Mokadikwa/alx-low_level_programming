#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: bytes to allocate
 *
 * Return: results
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
