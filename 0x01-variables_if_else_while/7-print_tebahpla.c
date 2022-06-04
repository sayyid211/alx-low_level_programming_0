#include <stdio.h>
/**
 * main - Entry point
 *
 * print reversed alphabets
 * Return: Always 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
