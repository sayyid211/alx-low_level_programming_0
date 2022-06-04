#include <stdio.h>
/**
 * main - Entry point
 *
 * program to print 0 to 9 as chars
 * Return: always 0
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
