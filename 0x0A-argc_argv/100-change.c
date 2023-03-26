#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change.
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1}; /* coin denominations */
	int num_coins = 0, i;
	int cents, remaining_cents;

	if (argc != 2) /* incorrect number of arguments */
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]); /* convert argument to int */

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	remaining_cents = cents;

	for (i = 0; i < 5; i++)
	{
	num_coins += remaining_cents / coins[i];
	remaining_cents %= coins[i];
	}

	printf("%d\n", num_coins);

	return (0);
}

