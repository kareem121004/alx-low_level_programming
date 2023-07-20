#include <stdio.h>
#include "main.h"

/**
 * print_line - prints _ to n,
 * followed by a new line
 * @n: print _ to this number
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('_');
		return;
	}
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
