#include "main.h"
/**
 * _memset - write to memory
 * @s: mem location
 * @b: const to write
 * @n: number of mem bytes to modify
 * Return; memory contents
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
