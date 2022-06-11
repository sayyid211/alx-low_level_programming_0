#include "main.h"
/**
 * print_numbers - print 0-9
 */
void print_numbers(void)
{
	char x = 0;
	int count = 0;

	while (count < 2)
	{
		for (; x <= '9'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count++;
	}
}
