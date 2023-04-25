#include "main.h"

/**
 * main - Entry point
 * description:'Prints the alphabets'
 * Return: Always 0
 */

void print_alphabet(void);
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
}
