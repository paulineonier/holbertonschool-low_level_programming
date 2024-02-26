#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n: number of times '\' should be printed
 */

void print_diagonal(int n)
{
	if (n > 0) /* v√rifie si valeur n est positive */
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++) /* cr√©√e ldiagonale,ex√ute de 0 a i-1 */
			{
				_putchar(' '); /* imprime un espace */
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else /* si n = 0 ou n√©gatif affiche \n donc ligne vide */
		{
		_putchar('\n');
		}
}
