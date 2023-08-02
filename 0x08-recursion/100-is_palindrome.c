#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to be checked
 * @l: the first char
 * @e: len of string
 * Return: 0 or 1
*/

int length(char *s);
int ispal(char *s, int l, int e);
int is_palindrome(char *s)
{
	int len = length(s);

	if (len == 0)
		return (1);
	return (ispal(s, 0, len - 1));
}

/**
 * ispal - check if a string is a palindrome
 * @s: string to be checked
 * @l: the first char
 * @e: len of string
 * Return: 0 or 1
*/

int ispal(char *s, int l, int e)
{
	if (l == e)
		return (1);
	if (s[l] != s[e])
		return (0);
	if (l < e + 1)
		return (ispal(s, l + 1, e - 1));
	return (1);
}

/**
 * length - calculate the length of a string
 * @s: input string
 * Return: length of the string
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}
