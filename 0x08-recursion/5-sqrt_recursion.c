#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: num to find its root
 * @val: the root of the num
 * Return: the root
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find the square root
 * @n: num to find its root
 * @val: the root of the num
 * Return: the root
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
