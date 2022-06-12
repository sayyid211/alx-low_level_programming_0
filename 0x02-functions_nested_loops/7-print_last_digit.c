#include "main.h"
/**
 * print_last_digit - prints the last digit of a decimal number
 * @n: Argument to function
 * Return: returns the input's last digit
 */
int print_last_digit(int n)
{
	int x = (n%10);

	_putchar(x);
	return (n%10);
}
