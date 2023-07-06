#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int bit_count;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	bit_count = 0;

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((mask & n) != 0)
			putchar('1');
		else
			putchar('0');
		mask >>= 1;
		bit_count++;
	}
}
