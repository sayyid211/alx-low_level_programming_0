#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 x 10
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		_putchar(x);
	}
	for (y = 0; y < 14;y+=10)
	{
		_putchar(y);
	}
	_putchar('\n');
}
