#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string argument
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	_puts_recursion(s);
}
