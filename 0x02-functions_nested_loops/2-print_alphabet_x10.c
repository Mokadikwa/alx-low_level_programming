#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x, in lowercase
 * Return: Always
 */

void print_alphabet_x10(void)
{
	char alph;
	int n;

	n = 0;

	while (n < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		n++;
	}
}
