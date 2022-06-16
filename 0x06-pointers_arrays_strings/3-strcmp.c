#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
		_putchar('\n');
	}
	else if (*s1 < *s2)
	{
		return (-15);
		_putchar('\n');
	}
	else
	{
		return (15);
		_putchar('\n');
	}
}
