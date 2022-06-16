#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	if (*s1 == *s2)
	{
		x = 0;
	}
	else if (*s1 < *s2)
	{
		x = -15;
	}
	else
	{
		x = 15;
	}
	return (x);
}
