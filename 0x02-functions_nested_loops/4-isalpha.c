#include "main.h"
/**
 * _isalpha - check if input is alphabetic
 *
 * @c: argument
 * Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{
	switch (c)
	{
	case (c >= 65 && c <= 90):
		return (1);
		break;
	case (c >= 97 && c <= 122):
		return (1);
		break;
	default:
		return (0);
	}
}
