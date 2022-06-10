#include "main.h"
/**
 * _isupper - checks the case of alphabets
 * @c: argument to be tested
 * Return: 1 if upper case and 0 otherwise
 */
int _isupper(int c)
{
	int a;

	if (c >= 65 && c < 97)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
