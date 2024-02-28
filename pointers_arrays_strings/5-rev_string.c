#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, h;
	char first, last;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;
	h = j / 2;
	while (j >= 0 && h >= 0)
	{
		first = s[j - h];
		last = s[h];
		s[h] = first;
		s[j - h] = last;
		h--;
	}
}
