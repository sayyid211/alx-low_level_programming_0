#include "main.h"
/**
 * _puts - prints given string
 * @str: string adress to print
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != 0)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
