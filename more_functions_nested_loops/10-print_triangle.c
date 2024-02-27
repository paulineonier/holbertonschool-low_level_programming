#include "main.h"

/*
 * print_triangle - prints a triangle followed by new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hauteur;
	int largeur;
	int triangle;

	if (size <= 0) /** si size <= a 0 imprime une nouvelle ligne */
	{
		_putchar('\n');
	}

	for (hauteur = 1; hauteur <= size; hauteur++)
	/** boucle pour chaque ligne du triangle */
	{
		for (largeur = 1; largeur <= (size - hauteur); largeur++)
/** size - hauteur, execution si largeur <= la diff size et hauteur */
		{
			_putchar(' ');
		}
		for (triangle = 1; triangle <= hauteur; triangle++)
	/* print les '#' pour former le triangle */
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
