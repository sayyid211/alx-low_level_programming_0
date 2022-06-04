#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints alphabets in lower and upper case
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x = 97;
	int y = 65;

	do{
		putchar(x);
		x++;
        } while (x < (x + 26));
	do{
		putchar(y);
		y++;
	} while (y < (y + 26));
	putchar('\n');
	return (0);
}
