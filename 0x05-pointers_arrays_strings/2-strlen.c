#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the int to be checked
 * Return: length
*/

int _strlen(char *s)
{
	int counter = 0;

	for (; *s != '\0'; s++)
	{
		counter++;
	}
	return (counter);
}
