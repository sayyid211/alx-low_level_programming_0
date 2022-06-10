#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 x 10
 */
void more_numbers(void)
{
	int x;
	char nr[10] = "1011121314";

	for (x = 48; x <= 57; x++)
	{
		_putchar(x);
	}
	for (x = 0; x <= 10; x++)
	{
		_putchar(nr[x]);
	}
	_putchar('\n');
}
