#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _strlen(char *s);

/**
 * _strdup - duplicstes a string
 * @str: string to duplicate
 * Return: Success or failure
 */

char *_strdup(char *str)
{
	char *copy;
	int size = _strlen(str);
	int i;

	if (!str)
		return (NULL);
	while (1)
	{
		copy = malloc(sizeof(char) * (size + 1));
		if (copy == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			copy[i] = str[i];
		}
		return (copy);
	}
}

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
