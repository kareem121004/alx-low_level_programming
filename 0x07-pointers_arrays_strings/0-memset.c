#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: is the char to be checked
 *@b:is the char to be checked
 *@n: is the num to be checked
 *Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = (char *) s;

	for (i = 0; i != n; i++)
	{
		p[i] = b;
	}

	return (s);
}
