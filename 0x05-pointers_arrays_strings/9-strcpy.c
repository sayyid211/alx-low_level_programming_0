#include "main.h"
/**
 * _strcpy - copy string
 * @dest: copy destination
 * @src: copy source
 * Return: some string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
