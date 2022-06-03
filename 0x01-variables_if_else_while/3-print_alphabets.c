#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints alphabets in lower and upper case
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while (x < (x + 26))
	{
		putchar(x);
		x++;
	}
	do
	{
		putchar(y);
		y++;
	}
	while (y < 90)
	putchar('\n');
	return (0);
}
