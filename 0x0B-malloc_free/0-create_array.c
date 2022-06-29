#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - makes an array of dynamic memory
 * @size: size of array
 * @c: arg to initialize first index with
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	while (1)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
		unsigned int i;
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		if (size == 0)
			return (NULL);
		return (p);

	}
}
