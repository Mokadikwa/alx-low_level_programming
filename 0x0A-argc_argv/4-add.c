#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 unless if error returns 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num, i;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
		else if (num < 0)
		{
			printf("error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

