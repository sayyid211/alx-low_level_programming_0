#include "main.h"
/**
 * print_last_digit - prints the last digit of a decimal number
 * @n: Argument to function
 * Return: returns the input's last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
		_putchar(x);
		return (n % 10);
	}
	else
	{
		int c = n % 10;

		x = 10 - c;
		_putchar(x);
		return (10 - c);
	}
}
