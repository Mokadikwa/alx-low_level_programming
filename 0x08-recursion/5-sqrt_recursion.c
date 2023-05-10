#include "main.h"
#include <stdio.h>

/**
 * _sqrt - function
 * @n: integer
 * @i: integer
 * Return: results
 */

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: results
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

#include "main.h"
#include <stdio.h>

/**
 * _sqrt - returns the natural square root of a number
 * @n: integer
 * @i: integer
 * Return: results
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
