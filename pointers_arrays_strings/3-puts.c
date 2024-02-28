#include "main.h"

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
