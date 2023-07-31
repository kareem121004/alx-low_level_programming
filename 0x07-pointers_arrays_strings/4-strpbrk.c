#include "main.h"

/**
 *_strpbrk - a function that locates a character in a string.
 *@s: is the char to be checked
 *@accept: is the char to be checked
 *Return: a pointer to the first occurrence.
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ch = accept;

		while (*ch != '\0')
		{
			if (*s == *ch)
				return ((char *)s);
			ch++;
		}
		s++;
	}

	return (0);
}
