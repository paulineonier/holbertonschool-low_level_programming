#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 */

void print_square(int size)
{
	int ligne, colonne;

	if (size > 0) /* verifie si taille du carré superieur a 0 */
	{
		for (ligne = 1; ligne <= size; ligne++)
 /* boucle parcourt chaque ligne du carr�é� �e finis a la taille sp�cifié*/
		{
			for (colonne = 1; colonne <= size; colonne++)
		/* parcourt chaque colonne du carré*/
			{
				_putchar('#');
	/* chaque it�ration caractere # est imprimé*/
			}
			_putchar('\n');
		}
	}
	else /* si taille du carré< ou = a 0 produiy sortie vide */
		_putchar('\n');
}
