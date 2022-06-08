#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
