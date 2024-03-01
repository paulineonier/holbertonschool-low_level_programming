#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @src: string
 *
 * Return: src
 */

char *leet(char *src)
{

	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; src[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (src[j] == a[i])
				src[j] = b[i];
		}
	}

	return (src);
}
