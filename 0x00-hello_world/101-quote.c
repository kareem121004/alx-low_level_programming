#include <unistd>

/**
 * main - Entry point
 *
 * Description: A C program using write to print
 *
 * Return: Always 1
*/

int main(void)
{
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int length = strlen(message);

	write(1, message, lenght);
	return (1);
}
