#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: argument fot test
 * Return: absolute val of r
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r / -1);
	}
	else
	{
		return (r);
	}
}
