#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 * @argc: num
 * @argv: char
 * Return: 0
*/

int main(int argc __attribute__ ((__unused__)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);

}
