#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string argument
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	return;
	_putchar(*s);
}
