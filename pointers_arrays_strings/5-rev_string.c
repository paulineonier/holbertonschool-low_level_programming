#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, h;
	char first, last;

	i = 0;

	while (s[i] != '\0') /* calcul de la len de la chaine */
	{
		i++;
	}

	j = i - 1; /* indice du dernier caractere de la chaine */
	h = j / 2; /* indice correspondant moitie de la chaine */
	while (j >= 0 && h >= 0)
	/* boucle pour inversion de la chaine en utilisant 2 pointeurs */
	{
		first = s[j - h];
	/*dernier caractere - moiti√ ©chaine devient first */
		last = s[h];
	/* dernier devient moiti√©*/
		s[h] = first;
	/* echange s'effectue, remplace caractere symetrique du cote oppose */
		s[j - h] = last;
	/* first devient last, finalise l'echange */
		h--;
	/* decremente pour passer a la paire suivante */
	}
}
