#include "main.h"

/**
 * _strcmp - fonction qui compare deux chaines
 * @s1: premiere chaine
 * @s2: deuxieme chaine
 *
 * Return: 0 si s1 = 0, int positif si S1 > s2, int negatif si S1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != ('\0') || s2[i] != ('\0'); i++)

	{
		if (s1[i] != s2[i])

		return (s1[i] - s2[i]);
	}
	return (0);
}
