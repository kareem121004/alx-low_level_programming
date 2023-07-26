#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string (same as dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = *dest;

	while (*dest)
		dest++;
	while (n > 0 && *src)
	{
		*dest = *src;
		*src++;
		*dest++;
		n--;
	}
	*dest = '\0';

	return (*result);
}
