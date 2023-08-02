#include "main.h"

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: num to be checked
 * @i: i is current divisor to check
 * Return: 0 or 1
*/

int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - check if the input integer is a prime number
 * @n: num to be checked
 * @i: i is current divisor to check
 * Return: 0 or 1
*/

int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}
