#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The input string to be modified.
 * @accept: char to be checked
 * Return: Pointer to the modified string.
*/

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s != '\0')
	{
		int is_matched = 0;

		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				is_matched = 1;
				break;
			}
		}

		if (is_matched)
			counter++;
		else
			break;
		s++;
	}

	return (counter);
}
