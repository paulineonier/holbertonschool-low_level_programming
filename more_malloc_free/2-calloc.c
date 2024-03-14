#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
	{
		return (NULL);
	}

	/* allocate memory and check if error */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
