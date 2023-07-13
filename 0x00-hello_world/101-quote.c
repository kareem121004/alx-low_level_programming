#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: A C program using write to print
 *
 * Return: Always 1
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int length = strlen(q);

	write(1, q, length);
	return (1);
}
