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
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
