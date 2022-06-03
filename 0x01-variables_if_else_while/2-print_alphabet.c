#include <stdio.h>
/**
 *main - Entry point
 *
 *prigram prints alphabets
 *Return: Always 0 (Success)
 */
int main(void)
{
	int x = 97;
	int y;

	while (x < (97+25))
	{
		y = ('%c', x);
		putchar(y);
		x++;
	}
	putchar('\n');
	return (0);
}
