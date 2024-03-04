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
	int bytes = n;

	if (bytes > 0)
	{
		int i;

		for (i = 0; i < bytes; i++)
			src[i] = dest[i];
	}
	return (dest);
}
