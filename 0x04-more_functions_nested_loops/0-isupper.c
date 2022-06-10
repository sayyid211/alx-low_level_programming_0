#include "main.h"
/**
 * _isupper - checks the case of alphabets
 * @c: argument to be tested
 * Return: 1 if upper case and 0 otherwise
 */
int _isupper(int c)
{
	if (int(c) < 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
