#include "main.h"


/**
 * _isdigit - check if digit
 * @c: is the char to be checked
 * Return: 1 if digit , otherwise 0.
*/

int _isdigit(int c)
{
	if (c > 0 && c <= 9)
		return (1);
	return (0);
}
