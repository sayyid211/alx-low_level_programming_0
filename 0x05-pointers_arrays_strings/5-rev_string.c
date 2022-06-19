#include "main.h"
/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int z = 0;
	char *tmp = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	while (x != 0)
	{
		*(tmp + z) = *(s + x);
		x--;
		z++;
	}
	*s = *tmp;
}
