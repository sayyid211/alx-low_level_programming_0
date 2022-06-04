#include <stdio.h>
/**
 * main - Entry Point
 *
 * printing 0 to 9 in decimal
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}
