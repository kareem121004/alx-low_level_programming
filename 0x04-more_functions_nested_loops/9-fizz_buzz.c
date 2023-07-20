#include "main.h"

/**
 * main - start point
 *
 * Description: prints the numbers from 1 to 100, followed by a new line.
 *
 * Return: always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
