#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 x 10
 * Return: 0
 */
void more_numbers(void)
{
	int n = 0;
	int x;
	char nr[] = "01234567891011121314\n";

	for (; n < 10; n++)
	{
		for (x = 0; x < 21; x++)
		{
			_putchar(nr[x]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
