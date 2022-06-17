#include "main.h"
/**
 * _strcmp - cxompare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y;

	while (*(s1 + x) != '\0' || *(s2 + x) != '\0')
	{
		if (*(s1 + x) != *(s2 + x))
		{
			y = (*(s1 + x) - *(s2 + x));
			break;
		}
		else
		{
			y = 0;
		}
		x++;
	}
	return (y);
}
