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
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
