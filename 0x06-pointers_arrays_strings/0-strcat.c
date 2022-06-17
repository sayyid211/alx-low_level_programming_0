#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: destination str
 * @src: source of second str
 * Return: conc str
 */

char *_strcat(char *dest, char *src)
{
	int _strlen(char *s);
	/* get dest size*/
	int x = _strlen(dest);

	/* variable to hold index of src */
	int i = 0;

	/* loop through src, appending elements to dest */
	while (*(src + i) != '\0')
	{
		*(dest + x) = *(src + i);
		x++;
		i++;
	}
	return (dest);
}

int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != 0)
	{
		c++;
	}
	return (c);
}
