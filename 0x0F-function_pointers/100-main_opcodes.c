#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints the opcode of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to the argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, n;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
		printf("%02hhx\n", ptr[i]);
		break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
