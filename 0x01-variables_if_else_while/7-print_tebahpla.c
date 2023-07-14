#include <stdio.h>

/**
 * main - start point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
*/

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
