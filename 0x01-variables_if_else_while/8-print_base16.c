#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print numbers of base 16 in lowercase'
 * Return: Always 0 (success)
 */

int main(void)
{
	int b;
	int a;

	for (b = 48; b < 58; b++)
		putchar(b);
	for (a = 97; a < 103; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
