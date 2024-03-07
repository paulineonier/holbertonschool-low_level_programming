#include <stdio.h>

/**
 * main - entry point.
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc);
	argc--;
	return (0);
}
