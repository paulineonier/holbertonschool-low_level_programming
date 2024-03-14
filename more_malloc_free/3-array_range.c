#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max) /* verifie si min > max si oui return NULL */
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * n);
	/**
	 * alloue dynamiquement de la memoire pour stocker n
	 * n = diff entre max et min avce +1 pour inclure max
	 */

	if (ptr == NULL) /* si allocation echoue renvoie NULL */
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	/* initialise les valeurs du tableau avec entier de min a max */
	{
		ptr[i] = min++;
	}
	return (ptr); /* renvoie pointeur vers la tableau */
}
