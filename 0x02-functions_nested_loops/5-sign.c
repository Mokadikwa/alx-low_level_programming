#include "main.h"
#include <stdio.h>
/**
 * print_sign - A function that prints the sign of a number
 * @n: 'int to check sign'
 * Return: 1 if n is greater than 0
 * 0 if n is 0
 * -1 if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
