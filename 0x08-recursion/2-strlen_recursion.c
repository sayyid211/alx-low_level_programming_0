#include "main.h"
/**
 * _strlen_recursion - returns str length
 * @s: str to count
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		return (i + 1);
	}
	return (_strlen_recursion(s[i + 1]));
}
