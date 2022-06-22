#include "main.h"
/**
 * _strlen_recursion - returns str length
 * @s: str to count
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0 + 1);
	}
	return (_strlen_recursion(s++));
}
