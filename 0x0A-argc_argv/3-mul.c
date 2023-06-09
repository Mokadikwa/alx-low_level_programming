#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;

	if (result == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);

	return (0);
}
