#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, s = 0;

	va_list args;

	if (!n)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
		s += va_arg(args, int);
	va_end(args);
	return (s);
}
