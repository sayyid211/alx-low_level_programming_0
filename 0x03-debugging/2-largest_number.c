#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Always 0 (success)
 */

int largest_number(int a, int b, int c)
{
	if (a >= b && b >= c)
	{
		return (a);
	}
	else if (b > a && a >= c)
	{
		return (b);
	}
	else
	{
		return (c);
	}
}
