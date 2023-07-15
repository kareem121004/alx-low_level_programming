#include <stdio.h>

/**
 * main - start point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: always 0
*/

int main(void)
{
	int i = 0;

	while (i <= 99)
	{
		int j = 0;

		while (j <= 99)
		{
			if (i != j && i < j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i + j != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
