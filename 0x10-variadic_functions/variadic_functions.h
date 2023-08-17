#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdio.h>
#include <stdarg.h>


/**
* struct token - struct token
* @token: token
* @f: func
*/

typedef struct token
{
	char * token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

