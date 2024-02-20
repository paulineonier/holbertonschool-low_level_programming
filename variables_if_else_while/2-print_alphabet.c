#include <stdio.h>

/* main - print lowercase a-z, return: Always 0 (Success) */

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
