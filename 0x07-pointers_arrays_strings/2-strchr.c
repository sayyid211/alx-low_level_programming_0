#include "main.h"
/**
 * _strchr - searches a char in string
 * @s: str to search
 * @c: char to find
 * Return: address of char or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *b;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			b = (s + i);
		}
		else
		{
			b = NULL;
		}
		i++;
	}
	return (b);
}
