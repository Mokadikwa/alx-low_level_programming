#include "function_pointers.h"
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @start: pointer
 * @size: size of func
 * Return: void
 */

void print_opcodes(char *start, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%02hhx ", start[i]);
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
		return (1);
	print_opcodes((char *)main, atoi(argv[1]));

	return (0);
}
