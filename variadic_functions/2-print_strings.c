#include <stdarg.h> /* va_* */
#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: delimiter
 * @n: number of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	/* declaration de la liste d'argument variable */
	unsigned int i; /* declaration de l'indice pour la boucle */
	char *s; /* decla d'un pointeur de string */

	if (n > 0) /* verifie si il y a au moins un argument */
	{
		va_start(valist, n); /* initialise la liste d'arguments variables */
		for (i = 1; i <= n; i++) /* boucle a travers chaque argument */
		{
			s = va_arg(valist, char *); /* recupere argument de type char */
			if (s == NULL) /* verifie si chaine est NULL */
				printf("(nil)"); /* affiche nil si chaine NULL */
			else
				printf("%s", s); /* affiche chaine de caracteres */

			if (i != n && separator != NULL) /* verifie si ajout de separateur */
				printf("%s", separator); /* ajoute separateur */
		}
		va_end(valist); /* termine utilisation de la liste d'arg */
	}
	printf("\n");
}
