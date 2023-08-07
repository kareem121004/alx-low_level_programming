#include "main.h"

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: char
 * Return:  copy of the string
*/

char *_strdup(char *str)
{
	char *cp;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	cp[len] = '\0';

	return (cp);
}
