#include "main.h"
#include <stdio.h>

/**
 * print_numbers - entry point
 * description:' prints the numbers, from 0 to 9'
 * Return: results
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
