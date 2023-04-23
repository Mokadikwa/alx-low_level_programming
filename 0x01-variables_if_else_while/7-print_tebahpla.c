#include <stdio.h>

/**
 * main - Entry point
 * description: 'print alphabets in reverse'
 * Return: Always 0 (success)
 */

int main(void)
{
	char n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
