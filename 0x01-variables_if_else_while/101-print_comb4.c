#include <stdio.h>

/**
 * main - start point
 *
 * Description: prints all possible different combinations of three digits
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
			int l = 0;

			while (l <= 9)
			{
				if (i != j && i < j && j != l && j < l)
				{
					putchar(i + 48);

					putchar(j + 48);

					putchar(l + 48);

					if (i + j + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);

}
