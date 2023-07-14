#include <stdio.h>

/**
 * main - start point
 *
 * Description: program that prints all possible combinations of numbers
 *
 * Return: always 0
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');

		}
		i++;
	}
	putchar('\n');

	return (0);
}
