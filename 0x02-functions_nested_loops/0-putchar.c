#include "main.h"
/**
 * printchar - print given string
 *
 * Return: 0
 */
int printchar(int x, char stg)
{

	stg[]="_putchar";
	x = 0;

	while (x < 8)
	{
		_putchar(stg[x]);
		x++;
	}
	return (0);
}
int main(void)
{
	printchar();
	return (0);
}
