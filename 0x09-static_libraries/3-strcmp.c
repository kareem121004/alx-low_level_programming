#include "main.h"

/**
 *  _strcmp - a function that compares two strings
 * @s1: Pointer to the destination string.
 * @s2: Pointer to the source string to be compared.
 * Return: Pointer to the resulting string (same as dest).
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
