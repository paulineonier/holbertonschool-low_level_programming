#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes with specific char
 * @c: char
 * @size: size of array
 * Return: NULL if fails or pointers to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
