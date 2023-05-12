#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry
 * @argc: number of arguments passed
 * @argv: array of pointers
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
