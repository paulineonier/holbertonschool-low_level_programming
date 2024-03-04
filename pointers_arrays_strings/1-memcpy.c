#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes
 * @src: one memory area
 * @dest: one memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			src[i] = dest[i];
	}
	return (dest)
}
