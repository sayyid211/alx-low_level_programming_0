#include "main.h"
/**
* _memcpy - copies content memory
* @dest: copy destination
* @src: memory
* @n: number of objects to copy
* Return: memory content
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
