#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{
	int ligne, colonne;

	if (size > 0) /* verifie si taille du carrÃ© superieur a 0 */
	{
		for (ligne = 1; ligne <= size; ligne++)
 /* boucle parcourt chaque ligne du carr©Ã©Ã ©e finis a la taille spÃcifiÃ©*/
		{
			for (colonne = 1; colonne <= size; colonne++)
		/* parcourt chaque colonne du carrÃ©*/
			{
				_putchar('#');
	/* chaque itÃration caractere # est imprimÃ©*/
			}
			_putchar('\n');
		}
	}
	else /* si taille du carrÃ©< ou = a 0 produiy sortie vide */
		_putchar('\n');
}
