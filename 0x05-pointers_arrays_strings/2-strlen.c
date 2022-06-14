#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: argument, pointer int to string array
 * Return: size of string array
 */
int _strlen(char *s)
{
	int i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
