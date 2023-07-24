#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: is the num to be checked
 * @n: is the number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
