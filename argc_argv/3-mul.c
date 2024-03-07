#include <stdio.h>
#include "stdlib.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int result;

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);
}
