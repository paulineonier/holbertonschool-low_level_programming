#include <stdio.h>

/**
 * main - chiffres de 0 à 9 séparés par des virgules avec fonction putchar
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
