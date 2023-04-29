#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * description: 'prints the numbers from 1 to 100'
 * multiples of 5 print buzz
 * multiple of 3 print fizz
 * Return: results
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{

		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("buzz");
		}
		else if (a % 3 == 0)
		{
			printf("fizz");
		}
		else
		{
			printf("%d", a);
		}
	}
	return (0);
	putchar('\n');
}