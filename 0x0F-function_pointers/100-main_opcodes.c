#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: args
 * @argv: arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (c--)
	{
		printf("02hhx%s", *p++, c ? " " : "\n");
	}
	return (0);
}
