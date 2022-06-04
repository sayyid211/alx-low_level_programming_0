#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints alphabets without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != ('q' || 'e'))
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
