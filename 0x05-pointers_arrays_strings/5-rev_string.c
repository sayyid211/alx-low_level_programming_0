#include "main.h"
/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int z = 1;
	char *tp = *s;

	while (*(tp + x) != '\0')
	{
		x++;
	}
	while (x != 0)
	{
		*(s + z) = *(tp + x);
		x--;
		z++;
	}
}
