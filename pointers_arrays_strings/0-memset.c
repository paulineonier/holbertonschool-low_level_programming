#include "main.h"

/**
 * _memset - fills memory with the constant byte
 * @b: constant value
 * @s: pointer to  memory area
 * @n: number of bytes to fill
 *
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
