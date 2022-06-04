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
	int x = 97;

	while (x < (x +26))
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
