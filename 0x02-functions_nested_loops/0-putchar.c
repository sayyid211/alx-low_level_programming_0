#include "main.h"
/**
 * printchar - print given string
 */
void printchar(void)
{

	char stg[] = "_putchar";
	int x = 0;

	while (x < 8)
	{
		_putchar(stg[x]);
		x++;
	}
}
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	printchar();
	return (0);
}
