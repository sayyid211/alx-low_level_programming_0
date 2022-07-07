#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings given as args
 * @separator: element between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 1;
	va_list str;

	va_start(str, n);
	while (x < n)
	{
		if (!va_arg(str, char*))
			printf("(nil)");
		else
			printf("%s", va_arg(str, char *));
		if (separator != NULL)
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(str);
}
