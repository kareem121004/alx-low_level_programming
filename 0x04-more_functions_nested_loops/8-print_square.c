#include "main.h"

/**
 * print_square - Draws  the terminal using '#'.
 *                  If n is 0 or less, only a newline character is printed.
 *
 * @size: The number of times the character '#' should be printed.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0 ; i < size; i++)
	{
		for (j = 0; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
