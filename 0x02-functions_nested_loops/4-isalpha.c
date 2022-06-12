#include "main.h"
/**
 * _isalpha - check if input is alphabetic
 *
 * @c: argument
 * Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
