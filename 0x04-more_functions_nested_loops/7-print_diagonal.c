#include "main.h"
/**
 * print_diagonal - print an oblique line
 * @n: number of strokes to print
 */

void print_diagonal(int n)
{
	int x = 0;

	while (x < n)
	{
		int q = 0;

		for (; x < n; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		x++;
	}
