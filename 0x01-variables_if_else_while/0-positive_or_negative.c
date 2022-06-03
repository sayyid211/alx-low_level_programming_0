#include <stdio.h>
#include <time.h>
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
		printf("n is zero\n");
	}
	else if (n > 0)
	{
		printf("n is positive\n");
	}
	else
	{
		printf("n is negative\n");
	}
	return (0);
}
