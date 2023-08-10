#include "main.h"


/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct;
	int i, l = 0;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s1[len2] != '\0'; len2++)
		;

	conct = malloc(len1 + n + 1);

	if (conct == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		conct[l++] = s1[i];

	for (i = 0; i < n; i++)
		conct[l++] = s2[i];

	conct[l] = '\0';
	return (conct);
}
