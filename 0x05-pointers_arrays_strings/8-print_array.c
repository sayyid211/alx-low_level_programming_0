#include "main.h"
/**
 * print_array - print array elements n range
 * @a: pointer to array address
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int x = 0;
	int i = 0;

	while ((*(a + i) != 0) && x < n)
	{
		printf("%d", a[i]);
		if (x < n - 1)
		{
			printf(", ");
		}
		i++;
		x++;
	}
	printf("\n");
}
