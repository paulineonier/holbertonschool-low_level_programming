#include "main;h"

/**
 * _strstr - locates a substring
 * @needle: string with first occurence to be found
 * @haystack: string where to search
 *
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j, h;

	while (haystack[i] < '\0' && haystack[i] != needle[j])
		i++;
	if (haystack[i] == needle[j])
		return (needle[j];
	else 
