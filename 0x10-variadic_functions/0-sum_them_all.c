#include "variadic_functions.h"

/**
 * sum_them_all - add all args
 * @n: first arg
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list acount;
	int x = 0;
	unsigned int y = n;

	va_start (acount, n);
	while (x < n)
	{
		y = y + va_arg(acount, int);
		x++;
	}
	va_end (acount);
	return (y);
}
