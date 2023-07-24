#include "main.h"

/**
 * puts_half - returns the length of a string
 * @str: is the int to be checked
*/

void puts_half(char *str)
{
	int l, i;

	for (l = 0; str[l] != '\0'; ++l)
		;
	if (l % 2 != 0)
	{
		for (i = (l - 1) / 2 + 1; i < l; i++)
			putchar(str[i]);
	}
	else
		for (i = l / 2; i < l; i++)
			putchar(str[i]);
	putchar('\n');
}
