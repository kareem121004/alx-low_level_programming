#include <stdio.h>

/**
 * main - start point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
*/

int main(void)
{
	int i = 0;

	while (i <= 15)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i - 10 + 'a');
		i++;
	}
	putchar('\n');

	return (0);
}
