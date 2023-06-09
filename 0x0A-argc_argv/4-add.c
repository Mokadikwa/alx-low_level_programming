#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - check if character is digit
 * @c: character to check
 *
 * Return: 1 if character is digit otherwise 0
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_valid_number - checks if string represent a valid positive number
 * @s: string to check
 *
 * Return: 1 if string is a valid positive number, 0 otherwise
 */

int is_valid_number(char *s)
{
	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{
		if (!is_digit(*s))
			return (0);

		s++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(succes), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
