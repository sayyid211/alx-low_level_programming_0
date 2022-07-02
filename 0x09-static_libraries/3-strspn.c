#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: main str
 * @accept: prefix substring
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = strspn(s, accept);
	return (i);
}
