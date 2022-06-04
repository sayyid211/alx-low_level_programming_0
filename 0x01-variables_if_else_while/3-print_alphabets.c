#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * program prints alphabets in lower and upper case
 *Return: Always 0 (Success)
 */

int main(void)
{
	char x = 'a';
	char y = 'A';

	while (x < (x +26))
	{
		putchar(x);
		x++;
	}
	while (y < (y + 26))
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
