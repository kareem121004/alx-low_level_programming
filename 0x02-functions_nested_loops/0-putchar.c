#include "main.h"

/**
 * main - start point
 *
 * Description: function that prints _putchar
 *
 * Return: always 0
*/

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
