#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: is the char to be checked
 * @src: is the char to be checked
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}
