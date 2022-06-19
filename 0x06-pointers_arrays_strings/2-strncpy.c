#include "main.h"
/**
 * *_strncpy - copies some string
 * @dest: copy destination
 * @src: source
 * @n: counts string elements
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = 0;

	while (*(src + n) != '0')
	{
		*(dest + n) = * (src + n);
		n++;
	}
	return (dest);
}
