#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: string with first occurence to be found
 * @haystack: string where to search
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	/* Parcours de la chaîne haystack */

	while (haystack[i] != '\0')
	{
	/*  Si le caractère actuel de haystac pas égal a1er caractère deneedle */
		if (haystack[i] != needle[0])
		{
			i++;
		}
		else
		{
	/**
	* Si 1er caract' n trouvé dans  verifie correspondance sous-chaine
	* i + j = position actuelle qu'on verifie dans haystack
	*/
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
			{
				j++;
			}

	/* Si sous-chaîne=  entièrement trouvée, retourun pointeur dt sous-chaîn*/
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			else
			{
				/* Sinon, continue parcourir la chaîne haystack */
				i++;
			}
		}
	}

	/* Si aucune occurrence de la sous-chaîne n'a été trou */
	return (NULL);
}

