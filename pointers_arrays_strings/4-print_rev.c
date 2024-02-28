#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Returrn: void
 */

void print_rev(char *s)
{
	int i = 0; /* initialise a 0 la chaine */

	while (s[i] != '\0')
	{
		i++;
	}
/* parcours la chaine pour en calculer la longueur a chaque incr�mentation */
	for (i -= 1; i >= 0; i--) /* parcours la chaine en sens inverse */
	/* '-='de�remente de 1, pointe vers dernier element de la chaine*/
	{
		_putchar(s[i]); /* imprime caractere de la chaine */
	}
	_putchar('\n');
}
