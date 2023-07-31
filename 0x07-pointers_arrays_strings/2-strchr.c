#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@s: is the char to be checked
 *@c: is the char to be checked
 *Return: a pointer to the first occurrence.
*/

char *_strchr(char *s, char c)
{
	int itr = 0;

	while (s[itr] >= '\0')
	{
		if (c == s[itr])
			return (s + itr);
		s++;
		itr++;
	}

	return ('\0');
}
