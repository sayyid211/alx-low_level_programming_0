#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints arabic numerals separated  by commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
