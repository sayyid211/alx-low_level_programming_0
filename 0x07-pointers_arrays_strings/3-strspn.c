#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: main str
 * @accept: prefix substring
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int c = 0;

	while (*(accept + i) != '\0')
	{
		if (*(accept + i) == *(s + i))
		{
			c++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (c);
}
