#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9 excluding 4 and 2
 * Returns: results
 *
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			putchar (a);
	}
	putchar('\n');
}
