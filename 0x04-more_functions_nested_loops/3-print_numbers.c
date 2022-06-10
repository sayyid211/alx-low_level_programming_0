#include "main.h"
/**
 * print_numbers - print 0-9
 */
void print_numbers(void)
{
	char x;
	int count = 0;

	while (count < 2)
	{
		for (x = '0'; x <= '9'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count++;
	}
}
