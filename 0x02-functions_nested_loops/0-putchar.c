#include "main.h"
/**
 * printchar - print given string
 *
 * Return: 0
 */
int printchar(int x)
{

	char stg[]="_putchar";
	x = 0;

	while (x < 8)
	{
		_putchar(stg[x]);
		x++;
	}
	return (0);
}
