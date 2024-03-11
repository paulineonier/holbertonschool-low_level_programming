#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns cpncated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(concat + i) = *(s2 + j);
		i++;
		j++;
	}

	return (concat);
}
