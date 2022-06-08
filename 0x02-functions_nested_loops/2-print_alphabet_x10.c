#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets in lower case 10x
 */

void print_alphabet_x10(void)
{
	int line_count = 0;
	char alpha = 'a';

	while (line_count < 10)
	{
		do {
			_putchar(alpha);
			alpha++;
		}while (alpha <= 'z');
		_putchar('\n');
		line_count++;
	}
}
