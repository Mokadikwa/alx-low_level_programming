#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
        return(write(1, &c, 1));
}

/**
 * print_number - prints an integer.
 * @n: The integer to print.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	putchar(m % 10 + '0');
}

/**
 * main - multiplies two positive numbers.
 * @argc: The number of arguments passed.
 * @argv: The arguments passed.
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		write(2, "Error\n", 6);
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				write(2, "Error\n", 6);
				return (98);
			}
		}
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	print_number(i * j);
	putchar('\n');

	return (0);
}
