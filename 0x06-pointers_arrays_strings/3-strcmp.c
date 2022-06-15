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
	}
	else if (*s1 < *s2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
