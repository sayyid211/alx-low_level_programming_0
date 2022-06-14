#include "main.h"
/**
 * puts_half - prints half a string
 * @str: arg
 */

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (*(str + x) != 0)
	{
		x++;
	}
	y = (x -1)/2;
	while (y <= (x-1))
	{
		_putchar(*(str + y));
		y++;
	}
	_putchar('\n');
}
