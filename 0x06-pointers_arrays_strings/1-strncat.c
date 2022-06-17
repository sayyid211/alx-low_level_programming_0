#include "main.h"
/**
 * _strncat - concatenates strings
 * @dest: destination str
 * @src: source of second str
 * @n: limiter variable
 * Return: conc str
 */
char *_strncat(char *dest, char *src, int n)
{
	int _strlen(char *s);

	/* get dest size*/
	int x = _strlen(dest);
	/* initialize counter for looping through src */
	int i = 0;

	/* loop through src, appending elements to dest */
	while (*(src + i) != '\0')
	{
		if (i < n)
		{
			*(dest + x) = *(src + i);
			x++;
			i++;
		}
		else
		{
			/*(dest + x) = '\n';*/
			break;
		}
	}
	return (dest);
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
