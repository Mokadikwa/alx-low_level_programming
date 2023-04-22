#include <stdio.h>

/**
 * main - A program that writes the alphabet in lowercase
 * Return: Always (success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	putchar('\n');
	return (0);
}
