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

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;

		}
		i++;
	}
	return (0);
}
