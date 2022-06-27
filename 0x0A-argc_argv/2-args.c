#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vect
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int x = 0;

	for (; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
