#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned long int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
