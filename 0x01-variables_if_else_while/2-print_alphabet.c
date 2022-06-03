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

	while (x < (97 + 26))
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
