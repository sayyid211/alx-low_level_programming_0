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

	while (x < (97+25))
	{
		putchar('%c\n', x);
		x++;
	}
	return (0);
}
