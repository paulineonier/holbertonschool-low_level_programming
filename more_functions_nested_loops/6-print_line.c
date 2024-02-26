#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of time the character '_' should be printed
 */

void print_line(int n)
{
	if (n > 0) /* verifie si n est positif, si oui code s'ex√cute */
	{
		int i; /* declare i comme compteur */

		for (i = 0; i < n; i++) /* boucle de 0 a n-1 */
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else /* si n = 0 ou negatif affiche \n donc ligne vide */
		{
		_putchar('\n');
		}
}
