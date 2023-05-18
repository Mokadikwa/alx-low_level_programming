#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to program
 * @argv: array of arguments passed
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (98);
	}
	printf("%d\n", num1 * num2);

	return (0);
}
