#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * - prints hexadecimal base 0123456789abcdef, using putchar
 * Return: Always 0 (Success)
 */

int main(void)

{
	int number = '0';
	int a_to_f = 'a';

	while (number <= '9') /*print 0-9*/
	{
		putchar(number);
		number++;
	}

	while (a_to_f <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');

	return (0);
}
