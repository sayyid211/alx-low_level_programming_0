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
	int x, y;

	if (argc < 3)
	{
		y = 0;
		printf("Error");
		x = 1;
	}
	else
	{
		long a = (long)*argv[1];
		long b = (long)*argv[2];

		y = a * b;
		printf("%d\n", y);
		x = 0;
	}
	return (x);
}
