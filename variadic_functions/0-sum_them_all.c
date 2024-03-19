#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - retourne la somme d'un nombre variable d'entiers
 * @n: le nombre total d'entiers additionner
 * Return: la somme des entiers
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Déclaration de la variable va_list pour stocker les arguments variable */
	va_list valist;
	/* Décaration d'une variable pour stocker la somme */
	unsigned int sum = 0, i;

	/* Vérification si le nombre d'entier additionner est gal a 0 */
	if (n == 0)
		return (0);
	/* Initialisation de la liste d'arguments variables */
	va_start(valist, n);

	/* Boucle pour parcourir la liste d'arguments et calculer la somme */
	for (i = 0; i < n; i++)
		/* Récupération de l'entier suivant dans la liste et aute la somme */
		sum += va_arg(valist, int);

	/* Libératon de la mémoire associ� la liste d'arguments variables */
	va_end(valist);

	/* Retourne la somme calculée*/
	return (sum);
}

