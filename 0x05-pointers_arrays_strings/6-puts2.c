#include "main.h"
/**
 * puts2 - print string skipping odd index
 * @str: argument
 */
void puts2(char *str)
{
	int x = 0;
	int y = 0;

	while (*(str + x) != 0)
	{
		x++;
	}
	while (y <= x)
	{
		_putchar(*(str + y));
		y = y + 2;
	}
}
