#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * @largest: Return value for largest number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b)
	{
		largest = a;
		if (largest >= c)
		{
			return (largest);
		}
		else
		{
			return (c);
		}
	}
	else
	{
		largest = b;
		if (largest >= c)
		{
			return (largest);
		}
		else
		{
			return (c);
		}
	}
}
