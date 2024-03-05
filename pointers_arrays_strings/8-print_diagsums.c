#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diag' of a square of matrix of int
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonale1 = 0;
	int diagonale2 = 0;
	int ligne;
	int i;

	for (ligne = 0; ligne < size; ligne++)
	{
		i = (ligne * size) + ligne;
		diagonale1 += a[i];
	}

	for (ligne = 1; ligne <= size; ligne++)
	{
		i = (ligne * size) - ligne;
		diagonale2 += a[i];
	}
	printf("%d, %d\n", diagonale1, diagonale2);
}
