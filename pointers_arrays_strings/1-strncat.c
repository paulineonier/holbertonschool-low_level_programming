#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate in
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c; /* declaration des indices des string */

	for (i = 0; dest[i] != '\0'; i++) /* boucle qui parcours dest */
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
/* boucle qui parcourt src */
	{
		dest[i] = src[c];
	}
	return (dest);
}
