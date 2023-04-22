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
	printf("%c ", c);
	for (c = 'A'; c <= 'Z'; ++c)
	printf("%c ", c);
	return (0);
}
