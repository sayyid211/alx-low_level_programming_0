#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * n: random number to be checked for number line position
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* check the status of n*/
	if (n == 0)
	{
		printf("%u, is zero\n", &n);
	}
	else if (n > 0)
	{
		printf("%u, is positive\n", &n);
	}
	else
	{
		printf("%u, is negative\n", &n);
	}
	return (0);
}
