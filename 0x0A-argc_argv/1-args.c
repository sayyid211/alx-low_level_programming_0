#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
