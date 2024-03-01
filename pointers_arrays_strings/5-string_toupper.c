#include "main.h"

/**
 * string_toupper - fonction change lettre minuscule en majuscule
 * @src: string
 * Return: src avec lettres capitales
 */

char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++) /* parcours la chaine jusqu'a la fin) */
	{
		if (src[i] >= 'a' && src[i] <= 'z')
/* verifie si i (caractere actuel) = lettre minuscule */
		{
			src[i] = src[i] - 'a' + 'A';
		}
/*
 * si c'est le cas transforme la minuscule en majuscule
 * ASCII lettres minuscules= consecutives, - 'a' donne position actuelle lettre
 * en ajoutant A deplace la lettre de sa position actuelle vers majuscule
 */
	}
	return (src); /* rencoie la chaine modifiÃe avec les lettres en majuscule */
}
