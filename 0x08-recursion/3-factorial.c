#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * factorial - function returns the factorial of a given number
 * @n: factorial
 *
 * Return: factorial if n is bigger than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));

	return (-1);
}
