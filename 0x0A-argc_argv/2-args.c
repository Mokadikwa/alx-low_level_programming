#include <stdio.h>
#include "main.h"

/**
 * main - Entry
 * @argc: prints number of arguments passed
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}

	return (0);
}
