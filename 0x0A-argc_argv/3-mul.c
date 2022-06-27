#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vect
 * Return: success or error
 */

int main(int argc, char **argv)
{
	int x;
	int y;

	if (argc < 3)
	{
		y = 0;
		printf("Error\n");
		x = 1;
	}
	else
	{
		int a;
		int b;

		kstrto < int > (argv[1], "%d", &a);
		kstrto < int > (argv[2], "%d", &b);

		y = a * b;
		printf("%d\n", y);
		x = 0;
	}
	return (x);
}
