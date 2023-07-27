#include "main.h"

/**
 * *leet - encode the letter .
 * @str: The input string to be modified.
 * Return: Pointer to the modified string.
*/

char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = 4 + '0';
		else if (*ptr == 'e' || *ptr == 'E')
			*ptr = 3 + '0';
		else if (*ptr == 'o' || *ptr == 'O')
			*ptr = 0 + '0';
		else if (*ptr == 't' || *ptr == 'T')
			*ptr = 7 + '0';
		else if (*ptr == 'l' || *ptr == 'L')
			*ptr = 1 + '0';
		ptr++;
	}
	return (str);
}
