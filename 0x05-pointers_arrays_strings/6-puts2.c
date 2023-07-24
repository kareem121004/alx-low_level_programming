#include "main.h"

/**
 * puts2 - returns the length of a string
 * @str: is the int to be checked
*/

void puts2(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; ++l)
		;
	for (i = 0; i < l; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
