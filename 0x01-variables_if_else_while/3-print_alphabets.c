#include <stdio.h>

/**
 * main - A program that prints alphabet in lower and uppercase
 * Return: Always (success)
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	for (c = 'A'; c <= 'Z'; ++c)
	putchar(c);
	return (0);
}
