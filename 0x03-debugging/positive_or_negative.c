#include "main.h"

/**
 * positive_or_negative - positive or negative or zero,
 * followed by a new line
 * @i: print from this number
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
