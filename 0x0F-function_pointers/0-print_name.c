#include "function_pointers.h"


/**
 * print_name - print name using pointer to function
 * @name: string 
 * @f: pointer to function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
