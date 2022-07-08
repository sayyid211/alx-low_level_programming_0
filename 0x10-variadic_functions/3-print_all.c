#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - print all args
 * @format: list of arg types
 */

void print_all(const char * const format, ...)
{
	va_list val;
	int val_num = strlen(format);
	int counter = 0;

	va_start(val, format);
	while (counter < val_num)
	{
		switch(format[counter])
		{
		case 'c':
			char x = va_arg(val, char);
			printf("%c", x);
		case 'f':
			double x = va_arg(val, double);
			printF("%f", x);
		case 'i':
			int x = Va_arg(val, int);
			printf("%d", x);
		case 's':
			char *x = va_arg(val, char *);
			if (x == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", x);
			}
		default:
			break;
		}
	}
}
