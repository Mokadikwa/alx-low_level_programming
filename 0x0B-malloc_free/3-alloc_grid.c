#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of function
 * @height: height of function
 *
 * Return: grid(pointer to 2 dimentional array)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
		return (NULL);

	for (n = 0; n < width; n++)
	{
		grid[n] = malloc(sizeof(int) * height);
		if (grid[n] == NULL)
		{
			for (m = 0; m < n; m++)
				free(grid[m]);
			free(grid);
			return (NULL);
		}
	}

	for (n = 0; n < width; n++)
		for (m = 0; m < height; m++)
			grid[n][m] = 0;

	return (grid);
}
