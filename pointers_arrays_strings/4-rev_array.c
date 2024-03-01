#include "main.h"

/**
 * reverse_array - fonction reverse content of array of integers
 * @n: nombre d'elements de l'array
 * @a: array
 */

void reverse_array(int *a, int n)
{
	int i;
	int last;

	for (i = 0; i < (n / 2); i++)
	{
		last = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = last;
	}
}
