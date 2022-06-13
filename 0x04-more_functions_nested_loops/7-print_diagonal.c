#include "main.h"
/**
 * print_diagonal - print an oblique line
 * @n: number of strokes to print
 */

void print_diagonal(int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		int q = 0;

		while (q < n)
		{
			_putchar(' ');
			q++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
