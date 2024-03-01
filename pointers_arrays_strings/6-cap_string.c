#include "main.h"


/**
 * cap_string - fonction capitalizes all words of a string
 * @src: string
 *
 * Return: src
 */

char *cap_string(char *src)
{
	int i = 0;

	/* check first index for capital */
	if (src[i] >= 'a' && src[i] <= 'z')
		src[i] = src[i] - 'a' + 'A';
	i++;

	while (src[i] != '\0') /* iterate through string */
	{

		/* if lowercase and prior char is separator, capitalize*/
		if ((src[i] >= 'a' && src[i] <= 'z')
		    && (src[i - 1] == ',' || src[i - 1] == ';' || src[i - 1] == '.' ||
			src[i - 1] == '!' || src[i - 1] == '?' || src[i - 1] == '"' ||
			src[i - 1] == '(' || src[i - 1] == ')' || src[i - 1] == '{' ||
			src[i - 1] == '}' || src[i - 1] == ' ' || src[i - 1] == '\t'
			|| src[i - 1] == '\n'))
			src[i] = src[i] - 'a' + 'A';
		i++;
	}
	return (src);
}
