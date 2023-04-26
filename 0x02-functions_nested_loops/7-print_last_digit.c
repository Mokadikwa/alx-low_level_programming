#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * @n: n is the integer to extract last digit
 * Return: value of last number
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;

	if (l < 0)
		l = -1;
	_putchar(l + '0');

	return (l);
}
