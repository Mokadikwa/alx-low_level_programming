#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * calculate_min_coins - calculate the min number of coins
 * @cents: amount in cents
 *
 * Return: minimum number of coins
 */

int calculate_min_coins(int cents)
{
	int i, coins[5], num_coins, count;

	if (cents <= 0)
		return (0);

	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 5;
	coins[3] = 2;
	coins[4] = 1;

	num_coins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(succes), 1(Error)
 */

int main(int argc, char *argv[])
{
	int cents, min_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	min_coins = calculate_min_coins(cents);
	printf("%d\n", min_coins);

	return (0);
}
