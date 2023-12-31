#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: char to be checked
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);

	_puts_recursion(s + 1);
}
