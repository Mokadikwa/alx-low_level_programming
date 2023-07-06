#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int number which to retrieve value of bit
 * @index: index of bit to retrieve from n
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
