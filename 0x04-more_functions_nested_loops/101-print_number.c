#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: integer
 * Return: Results
 */

void print_numbers(int n)
{
	
	if (n < 0)
	{
		n = -n;
		putchar('-');
	}
	if (n / 10)
	{
		putchar(n /10);
	}
	putchar(n % 10 + '0');
	
}
