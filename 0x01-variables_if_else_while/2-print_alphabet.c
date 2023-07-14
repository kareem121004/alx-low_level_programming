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
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
