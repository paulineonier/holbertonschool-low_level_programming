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
	char *a, tmp;

	a = s; /* sauvegarde pointeur du string dans a */

		while (s[j] != '\0')
	/* compte nbre de caractere dans la chaine */
		{
			j++;
		}
		for (h = 1; h < j; h++)
		{
			a++;
/* deplace pointeur a vers fin de chaine en l'avancant de h positions */
		}

		for (i = 0; i < (j / 2); i++)
/*
 * inverse les caracteres,
 * continue tant que valeur de i < a la moitie de la len totale de la chaine
 * qd inverse chaine caractere traiter par paire avec son symetrique
 */
		{
/* partie du code qui echange les caracteres dans la chaine pour inversion */
			tmp = s[i];
/* caractere de la chaine sauvegarder dans variabale temporaire */
			s[i] = *a;
	/* echange la chaine avec position actuelle de a */
			*a = tmp;
/* remplace caractere sauvegarde dans a par caractere sauvegardÃ dans tmp */
			a--;
	/* deplace le pointeur a vers debut de la chaine */
		}
}
