#include <stdio.h>

/**
 * main - entry point
 * description:  a program that prints the name of the file it was compiled from
 *
 * Return: Results
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
