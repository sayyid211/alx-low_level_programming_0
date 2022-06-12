#include "main.h"
/**
 * printchar - print given string
 *
 * Return: 0
 */
int printchar(void)
{

	char stg[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(stg[x]);
		x++;
	}
	return (0);
}
