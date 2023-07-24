#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: is the num to be checked
 * @b: is the num to be checked
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
