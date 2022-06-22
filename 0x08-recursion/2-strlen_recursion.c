#include "main.h"
/**
 * _strlen_recursion - returns str length
 * @s: str to count
 * Return: str length
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*(s + i) == '\0')
	{
		return (s + i);
	}
	return (_strlen_recursion(s +(s + i)));
}
