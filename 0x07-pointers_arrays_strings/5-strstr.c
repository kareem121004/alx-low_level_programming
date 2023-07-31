#include "main.h"

/**
 *_strstr - a function that locates a character in a string.
 *@haystack: is the char to be checked
 *@needle: is the char to be checked
 *Return: a pointer.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}

	return (0);
}
