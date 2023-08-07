#include "main.h"

/**
 * create_array - an array of chars, and with a specific char
 * @size: Size of the array
 * @c: Character to insert
 * Return: Null if size is zero
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		array[i] = c;

	return (array);
}
