#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n:number
 *
 * Return: factorial of number, -1 if negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
