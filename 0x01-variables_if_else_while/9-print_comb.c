#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints arabic numerals separated  by commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
