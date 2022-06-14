#include "main.h"
/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	int z = 0;
	char tmp[];

	while(*(s + x) != 0)
	{
		x++;
	}

	y = x - 1;
	while (y >= 0)
	{
		tmp[z] = *(s + y);
		y--;
		z++;
	}
	*s = tmp;
}
