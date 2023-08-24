#include "lists.h"

/**
 * before_main - A constructor function that prints a message before main.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
