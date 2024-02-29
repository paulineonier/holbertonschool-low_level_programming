#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
