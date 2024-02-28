#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integers to swap
 * @b: intgers to swap
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
