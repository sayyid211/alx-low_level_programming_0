#include "main.h"
/**
 * puts2 - print string skipping odd index
 * @str: argument
 */
void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != 0 && *str != 0)
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}
