#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
		_putchar('\n');
	}
}
