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
	unsigned int x;
	va_list str;
	char *p;

	va_start(str, n);

	for (x = 0; x < n; x++)
	{
		p = (va_arg(str, char*));
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(str);
}
