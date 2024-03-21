#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist; /* decla liste arg variable */
	unsigned int i = 0, j, c = 0; /* decla v index, boucle indica format */
	char *str; /* decla d'un pointeur de string */
	const char t_arg[] = "cifs"; /* array pour type d'arg valide */

	va_start(valist, format); /* initia liste d'arg variable */
	while (format && format[i]) /* parcours chaine de format */
	{
		j = 0; /* reinitiali de l'indice de boucle */
		while (t_arg[j]) /* parcours des types d'arg */
		{
			if (format[i] == t_arg[j] && c) /* verif si caractere est type valide */
			{
				printf(", "); /* si oui add virgule */
				break;
			} j++; /* passage arg suivant */
		}
		switch (format[i]) /* selection de l'action en fonction du type d'arg */
		{
			case 'c':
				printf("%c", va_arg(valist, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), c = 1;
				break;
			case 's':
				str = va_arg(valist, char *), c = 1; /* recup string */
				if (!str) /* verif si chaine NULL */
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
