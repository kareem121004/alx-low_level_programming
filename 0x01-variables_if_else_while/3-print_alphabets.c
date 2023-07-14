#include <stdio.h>

/**
 * main - start point
 *
 * Description: Program to display all alphabets
 *
 * Return: always 0
*/

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	int j = 65;

	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
