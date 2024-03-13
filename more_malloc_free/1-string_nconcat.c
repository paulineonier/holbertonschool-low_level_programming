#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int bytes, len, i, j;

	bytes = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (bytes < 0) /* if negative n bytes */
	{	
		return (NULL);
	}
	if (bytes >= _strlen(s2)) /* if bigger than s2 */
	{	
		bytes = _strlen(s2);

	len = _strlen(s1) + bytes + 1; /* +1 for null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	}

	if (ptr == NULL)
	{	
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++) /* concat */
	{	
		ptr[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{	
		ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
	}
	return (ptr);
}
