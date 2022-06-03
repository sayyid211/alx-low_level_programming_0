#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* compute last digit*/
	int ldg = n % 10;
	printf("The last digit of %i is %i ", n, ldg);
	if ( ldg > 5)
		printf("and is greater than 5\n");
	else if (ldg == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	/*end of if section*/
	return (0);
}
