#include "main.h"
/**
 * swap_int - swap pointer values
 * @a: argument 1
 * @b: argument 2
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
