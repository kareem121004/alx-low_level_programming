#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that add the numbers.
 * @argc: num
 * @argv: char
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];

		while (*c != '\0')
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
