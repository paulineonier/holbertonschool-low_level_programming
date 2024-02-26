#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: number of times '\' should be printed
 */

void print_diagonal(int n)
{
	if (n > 0) /* verifie si n est positif, si oui code s'ex√cute */
	{
		int i; /* d√©clare i comme compteu */

		for (i = 0; i < n; i++) /* boucle de 0 a n-1 */
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else /* si n = 0 ou n√gatif affiche \n donc ligne vide */
		{
		_putchar('\n');
		}
}
