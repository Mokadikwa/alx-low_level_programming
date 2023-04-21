#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print last digit of number stored in n
 * Return: Always (success)
 *
 */

int main(void)

{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	
	if (last > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d  and is 0\n", n, last);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
