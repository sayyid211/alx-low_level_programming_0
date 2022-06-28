#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vect
 * Return: sum of args
 */

int main(int argc, char **argv)
{
	int i = 1;
	int y;
	int sum = 0;

	for (; i < argc; i++)
	{
		int x = atoi(argv[i]);

		if (!x)
		{
			printf("0\n");
			y = 0;
		}

		else if (__builtin_types_compatible_p(typeof(x), int))
		{
			sum += x;
			y = 0;
		}
		else
		{
			printf("Error\n");
			y = 1;
			break;
		}
	}
	printf("%d\n", sum);
	return (y);
}
