#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: argument
 */

void *_malloc_checked(unsigned int b)
{
	int *p;
	while (1)
	{
		if (p == NULL)
			return (98);
		p = malloc(sizeof(p) * b);
		return (p);
	}
}
