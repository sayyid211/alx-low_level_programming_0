#include <stdio.h>
/**
 * main - Entry point
 *
 * print nums in base 16
 * Return: always 0
 */
int main(void)
{
	int x = 0;

	while (x < 16)
	{
		x = (%x, x);
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
