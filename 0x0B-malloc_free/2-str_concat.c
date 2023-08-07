#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len = 0, i, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	conct = malloc(sizeof(char) * len);

	if (conct == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conct[l++] = s1[i];

	for (i = 0; s2[i]; i++)
		conct[l++] = s2[i];

	return (conct);
}
