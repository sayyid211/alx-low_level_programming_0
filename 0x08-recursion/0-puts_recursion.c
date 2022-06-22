#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string argument
 */
void _puts_recursion(char *s)
{
	int i;
	if (s[i] == 0)
	{
		return ('\n');
	}
	return (_puts_recursion(s[i + 1]);
}
