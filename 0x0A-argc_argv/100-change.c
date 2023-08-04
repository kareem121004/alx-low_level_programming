#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: num
 * @argv: char
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int num_coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	for (i = 0; i < 5; i++)
	{
		while (cents >= denominations[i])
		{
			num_coins += cents / denominations[i];
			cents = cents % denominations[i];

			if (cents % denominations[i] == 0)
				break;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
