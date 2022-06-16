#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: destination str
 * @src: source of second str
 * Return: conc str
 */
char *_strncat(char *dest, char *src, int n)
{
	/* get dest size*/
	int x = _strlen(dest);

	/* variable to hold index of src */
	int y = x - 1;
	int i = 0;

	/* loop through src, appending elements to dest */
	while (y != 0)
	{
		*(dest + y) = *(src + i);
		y++;
		i++;
	}
	return (*dest);
}

/**
 * _strlen - computes the length of a string
 * @s: argument, pointer int to string array
 * Return: size of string array
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
