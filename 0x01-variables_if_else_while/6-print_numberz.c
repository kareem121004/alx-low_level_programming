#include <stdio.h>

/**
 * main - start point
 *
 * Description: Program to display all num from 0 to 9
 *
 * Return: always 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
