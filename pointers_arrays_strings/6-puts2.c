#include "main.h"

/*
 * puts2 - prints every other character starting with first character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0; /* initialise compteur a 0 pour commencer au first caractere */
	while (str[i] != '\0') /* boucle parcours la chaine de caractere */
	{
		if (i % 2 == 0) /* verifie si indice est paire */
		{
			_putchar(str[i]);/* print les indice paire */
		}
		i++; /* incremente meme indice impaire */
	}
	_putchar('\n');
}
