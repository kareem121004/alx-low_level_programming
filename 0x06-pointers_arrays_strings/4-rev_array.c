# include "main.h"

/**
 * reverse_array - Function to reverse the elements of the array 'a' in place.
 * @a: Pointer to the integer array to be reversed.
 * @n: Number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp;

		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
