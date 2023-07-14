#include <stdio.h>

/**
 * main - start point
 *
 * Description: Program to display all alphabets except q and e
 *
 * Return: always 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
