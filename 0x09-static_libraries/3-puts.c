#include "main.h"

/**
 * _puts - returns the length of a string
 * @str: is the int to be checked
*/

void _puts(char *str)
{
	int counter = 0;

	for (; *str != '\0'; str++)
	{
		counter++;
	}
	while (counter--)
	{
		printf("%c", *(str - counter - 1));
	}
	printf("\n");
}
