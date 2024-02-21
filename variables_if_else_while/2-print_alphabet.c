#include <stdio.h>

/**
 * main - print lowercase a-z, return: Always 0 (Success)
 * Return: Always 0 (sucess)
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
