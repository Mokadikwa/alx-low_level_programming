#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer to check
 * Return: 1 if prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	return (check_prime(n, 2));
	}
	int check_prime(int n, int i)
	{
		if (i == n)
			return (1);
		if (n % i == 0)
			return (0);
		return (check_prime(n, i + 1));
	}
}
