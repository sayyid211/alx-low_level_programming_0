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

	while (y < (y + 25))
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
			
