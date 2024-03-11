#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: string to copy
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		j++;
	}

	c = malloc(sizeof(char) * j + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
