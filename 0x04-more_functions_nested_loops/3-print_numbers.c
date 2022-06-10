#include "main.h"
/**
 * print_numbers - print 0-9
 */
void print_numbers(void)
{
	int x;
	int count = 0;

	while (count < 2)
	{
		for (x = 48; x <= 57; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count++;
	}
}
