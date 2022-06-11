#include "main.h"
/**
 * print_line - echoes line to the screen
 * @n: argument to print line
 */
void print_line(int n)
{
	if (n != 0)
	{
		int x = 0;

		for (; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
