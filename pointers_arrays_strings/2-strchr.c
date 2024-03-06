#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @c: character to look for
 * @s: string
 *
 * Return: NULL if character not found, or c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
