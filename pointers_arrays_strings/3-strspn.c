#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: another string with bytes to match
 *
 * Return: number of bytes of s wich are in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int h = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				h++;
				break;
			}

		if (accept[j + 1] == '\0' && s[i] != accept[i])
			return (h);
		}
		i++;
	}
	return (h);
}
