#include <stdio.h>
/**
 * main - Entry point
 *
 * print nums in base 16
 * Return: always 0
 */
int main(void)
{
	char x = '0';
	char y = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;

	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
