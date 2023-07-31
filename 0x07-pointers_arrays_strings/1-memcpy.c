#include "main.h"

/**
 * _memcpy - Copies at most n bytes of the source string to the destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: Pointer to the resulting string (same as dest).
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *dest_arr = (char *)dest;
	char *src_arr = (char *)src;

	while (i < n)
	{
		dest_arr[i] = src_arr[i];
		i++;
	}

	return (dest);
}
