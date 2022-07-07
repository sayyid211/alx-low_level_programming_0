#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers passed as args
 * @separator: seperates numbers
 * @n: first number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x = 1;

	va_start(list, n);
	while (x <= n)
	{
		printf("%d", va_arg(list, unsigned int));
		if (separator != NULL)
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(list);
}
