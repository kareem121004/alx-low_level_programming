#include "main.h"

/**
 * factorial - a function that returns the factorial
 * @n:a given number.
 * Return: the factorial
*/

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
