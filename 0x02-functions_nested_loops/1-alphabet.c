#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Entry point
 * description:'Prints the alphabets'
 * Return: Always 0
 */

void print_alphabet(void)

{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
