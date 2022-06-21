#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sums of the 2 diagonals of a matrix
 * @a: position at matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int sum1 = 0;
	int sum2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
				sum1 += (*(a + x) + *(a + y));
		}
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if ((x + y) == (size - 1))
				sum2 += a[x] + a[y];
		}
	}
	printf("%d, %d, \n", sum1, sum2);
}
