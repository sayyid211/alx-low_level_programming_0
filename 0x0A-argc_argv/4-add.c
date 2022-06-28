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

		if (__builtin_types_compatible_p(typeof(x), int) == 0)
		{
			printf("Error\n");
			y = 1;
			break;
		}
		else if (argv[1] == NULL)
		{
			printf("0\n");
			y = 0;
		}
		else
		{
			y = 0;
		}
		sum += x;
	}
	printf("%d\n", sum);
	return (y);
}
