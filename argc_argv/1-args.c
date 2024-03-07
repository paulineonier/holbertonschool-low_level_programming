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
	argc--;
	printf("%d\n", argc);
	return (0);
}
