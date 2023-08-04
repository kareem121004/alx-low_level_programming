#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: num
 * @argv: char
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int num1, num2, pro;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		pro = num1 * num2;

		printf("%d\n", pro);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

}
