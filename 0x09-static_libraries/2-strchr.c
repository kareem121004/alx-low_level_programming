#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: is the char to be checked
 *@c: is the char to be checked
 *Return: a pointer to the first occurrence.
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (c == s[itr])
			return (s + itr);
	}

	return ('\0');
}
