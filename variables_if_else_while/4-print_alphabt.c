#include <stdio.h>

/**
 * main - print lowercase alpha a-z but remove 'q' and 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{

		if ((letter != 'q') && (letter != 'e'))
		{
													putchar(letter);

		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
