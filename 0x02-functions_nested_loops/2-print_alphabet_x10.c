#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
		i++;
	}
}
