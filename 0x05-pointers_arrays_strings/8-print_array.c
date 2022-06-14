#include "main.h"
/**
 * print_array - print array elements n range
 * @a: pointer to array address
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (;x <= n; x++)
	{
		printf(int(*(a + x)));
		printf(", ");
      	}
	printf("\n");
}
