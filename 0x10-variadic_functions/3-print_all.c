#include "variadic_functions.h"

/**
 * format_char - char
 * @seperator: seperator
 * @ap: pointer
*/

void format_char(char * seperator, va_list ap)
{
	printf("%s%c", seperator,  va_arg(ap, int));
}

/**
 * format_int - int
 * @seperator: seperator
 * @ap: pointer
*/

void format_int(char * seperator, va_list ap)
{
	printf("%s%d", seperator,  va_arg(ap, int));
}

/**
 * format_float - float
 * @seperator: seperator
 * @ap: pointer
*/

void format_float(char * seperator, va_list ap)
{
	printf("%s%f", seperator,  va_arg(ap, double));
}

/**
 * format_string - float
 * @seperator: seperator
 * @ap: pointer
*/

void format_string(char * seperator, va_list ap)
{
	char *str = va_arg(ap, char *);
	
	switch ((int)(!str))
	case 1:
		str = "(nil)";
	
	printf("%s%s", seperator, str);	

}

/**
 * print_all - print_all
 * @format: format string
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *seperator = "";
	va_list ap;

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(seperator, ap);
				seperator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}
