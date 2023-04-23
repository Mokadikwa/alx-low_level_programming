#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'A program that prints the alphabet in lowercase'
 * Return: 0 (Success)
 *
 */

int main(void)

{
	int n = 97

	; while (n <= 122)
	{
		if (n == 'q' || n == 'e')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
