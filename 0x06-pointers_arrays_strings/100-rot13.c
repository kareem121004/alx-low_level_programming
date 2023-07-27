#include "main.h"

/**
 * *rot13 - encode the letter .
 * @str: The input string to be modified.
 * Return: Pointer to the modified string.
*/

char *rot13(char *str)
{
	char *p = str;
	char root_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char root_rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*p)
	{
		char *root_p = root_chars;
		char *root_r = root_rep;

		while (*root_p)
		{
			if (*p == *root_p)
			{
				*p = *root_r;
				break;
			}
			root_p++;
			root_r++;
		}
		p++;
	}
	return (str);
}
