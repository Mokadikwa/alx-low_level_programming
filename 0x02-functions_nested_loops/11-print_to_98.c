#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: n is equal to zero
 * Return: natural numbers
 *
 */

void print_to_98(int n)
{
	int a, z;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)

		{
			if (a != 98)
				printf("%d,", a);
			else if (a == 98)
				printf("%d\n", a);
		}
	}
	else if (n >= 98)
	{
		for (z = n; z >= 98; z--)
		{
			if (z != 98)
				printf("%d,", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
}
