#include "main.h"

/**
 *_strspn - a function that locates a character in a string.
 *@s: is the char to be checked
 *@c: is the char to be checked
 *Return: a pointer to the first occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[itr]; jtr++)
		{
			if (accept[jtr] == '\0')
				return (itr);

		}
	}

	return (itr);
}
