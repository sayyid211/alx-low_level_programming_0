#include "main.h"
/**
 * print_array - print array elements n range
 * @a: pointer to array address
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (;x < n; x = x + 4)
	{
		_putchar(*(a + 1));
		printf(", ");
      	}
	printf("\n");
}
