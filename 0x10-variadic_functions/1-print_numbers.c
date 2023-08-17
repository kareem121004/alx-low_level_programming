#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;
	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d",va_arg(args, int));

		if (i < n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
