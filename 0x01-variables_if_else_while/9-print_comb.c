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
	for (int i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}
