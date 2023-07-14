#include <stdio.h>

/**
 * main - start point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
*/

int main(void)
{
	for (int i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
